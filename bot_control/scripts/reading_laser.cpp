#include "ros/ros.h"
#include "sensor_msgs/LaserScan.h"
#include <limits>
#include <cmath>

class LaserScanFilter {
public:
  LaserScanFilter() {
    ros::NodeHandle nh;
    subscription_ = nh.subscribe("/scan", 10, &LaserScanFilter::scanCallback, this);
    publisher_ = nh.advertise<sensor_msgs::LaserScan>("/filtered_scan", 10);
  }

  void spin() {
    ros::spin();
  }

private:
  void scanCallback(const sensor_msgs::LaserScan::ConstPtr& msg) {
    sensor_msgs::LaserScan filtered_scan = *msg;

    // Calculate index range for 0 to 120 degrees (assuming 360 degree scan)
    int start_index = 0; // 0 degrees
    int end_index = std::ceil(120.0 / 360.0 * msg->ranges.size()); // 120 degrees

    for (int i = 0; i < start_index; ++i) {
      filtered_scan.ranges[i] = std::numeric_limits<float>::infinity();
    }
    for (int i = end_index; i < msg->ranges.size(); ++i) {
      filtered_scan.ranges[i] = std::numeric_limits<float>::infinity();
    }

    publisher_.publish(filtered_scan);
  }

  ros::Subscriber subscription_;
  ros::Publisher publisher_;
};

int main(int argc, char **argv) {
  ros::init(argc, argv, "laser_scan_filter");
  LaserScanFilter filter;
  filter.spin();
  return 0;
}

