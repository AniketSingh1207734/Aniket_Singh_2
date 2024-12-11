# Bot Control Package

The `bot_control` package is designed to filter laser scan data from a robot and visualize the filtered data in RViz. This package reads laser scan data, filters it to a field of view of 0 to 120 degrees, and publishes the filtered data to a new topic for visualization.

## Dependencies

Ensure you have the following ROS packages installed:
- `roscpp`
- `std_msgs`
- `geometry_msgs`
- `sensor_msgs`
- `rviz`
- `gazebo_ros`

## Installation

1. Clone the repository into your ROS workspace:
    ```bash
    cd ~/Aniket_Singh_ws/src
    git clone https://github.com/AniketSingh1207734/Aniket_Singh_2 bot_control
    ```

2. Install the required dependencies:
    ```bash
    sudo apt-get update
    sudo apt-get install ros-noetic-roscpp ros-noetic-std_msgs ros-noetic-geometry_msgs ros-noetic-sensor_msgs ros-noetic-rviz ros-noetic-gazebo-ros
    ```

## Building the Package

Navigate to your workspace and build the package:
```bash
cd ~/Aniket_Singh_ws
catkin_make
```
Source your workspace to refresh the environment variables:
```
source devel/setup.bash
```

write complete bpt_control a rtead me file tating how to test your package. It should be well documented.
Here's a comprehensive README file for your bot_control package, which includes instructions on how to set up, build, and test the package.

README.md
markdown
# Bot Control Package

The `bot_control` package is designed to filter laser scan data from a robot and visualize the filtered data in RViz. This package reads laser scan data, filters it to a field of view of 0 to 120 degrees, and publishes the filtered data to a new topic for visualization.

## Dependencies

Ensure you have the following ROS packages installed:
- `roscpp`
- `std_msgs`
- `geometry_msgs`
- `sensor_msgs`
- `rviz`
- `gazebo_ros`

## Installation

1. Clone the repository into your ROS workspace:
    ```bash
    cd ~/Aniket_Singh_ws/src
    git clone <repository_url> bot_control
    ```

2. Install the required dependencies:
    ```bash
    sudo apt-get update
    sudo apt-get install ros-noetic-roscpp ros-noetic-std_msgs ros-noetic-geometry_msgs ros-noetic-sensor_msgs ros-noetic-rviz ros-noetic-gazebo-ros
    ```

## Building the Package

Navigate to your workspace and build the package:
```bash
cd ~/Aniket_Singh_ws
catkin_make
Source your workspace to refresh the environment variables:
`````
bash
```
source devel/setup.bash
```
Usage

# Launching the Node and RViz

To run the node and visualize the filtered laser scan data in RViz, use the provided launch file:
```
roslaunch bot_control filter_and_visualize.launch
```


