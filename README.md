ROS 2 Mobile Robotics Workspace - Flap-TB3-Bot
==============================================

This repository contains a comprehensive ROS 2 workspace for the design, simulation, and autonomous navigation of a custom mobile robot named **Flap-TB3-Bot**. This project was developed as part of the **Mobile Robotics module (PDE4430)**.

Project Overview
----------------

The **Flap-TB3-Bot** is a differential-drive robot designed for environment interaction and object manipulation within a Gazebo simulation. The robot is equipped with active side flaps for grabbing dynamic objects (spheres). The system features a full autonomy stack including SLAM, AMCL localization, and path planning using Nav2. A camera has been integrated for real-time visual monitoring of the robot's environment.

### Key Features

-   **Kinematics:** Differential drive with two active rear wheels and a low-friction front caster.

-   **Manipulation:** Dual side flaps controlled via individual position controllers (`gz-sim-joint-position-controller`).

-   **Navigation Stack:** Full integration with `SLAM Toolbox` and `Nav2` Bringup for autonomous movement.

-   **Sensor Suite:**

    -   **GPU LIDAR:** 360° scan with 640 samples for high-resolution mapping and obstacle avoidance.

    -   **Camera:** Real-time 640x480 video feed for visual monitoring during teleoperation and autonomous missions.

    -   **IMU:** High-frequency (200Hz) orientation data for robust odometry.

Workspace Structure
-------------------

```
ros2_workspace/
├── src/
│   ├── mobile_robot/           # Main configuration package
│   │   ├── config/             # YAML params (slam_params, nav2_params)
│   │   ├── model/              # Xacro/URDF (flap_tb3_bot.xacro)
│   │   ├── launch/             # Launch scripts (launch_sim, navigation)
│   │   ├── maps/               # Occupancy grid maps (.yaml, .pgm)
│   │   ├── rviz/               # Rviz2 configuration files (.rviz)
│   │   └── tf frames/          # TF tree visualizations (e.g., frames.pdf)
│   └── flap_teleop/            # Custom node for flap manipulation
└── install/                    # Build artifacts

```

Technical Specifications (Hardware)
-----------------------------------

Based on the robot's Xacro definition:

-   **Chassis:** 0.75m (L) x 0.55m (W) x 0.25m (H)

-   **Wheels:** 0.12m radius, 0.06m width.

-   **Flaps:** 0.40m length, capable of a 1.2 radian sweep.

-   **Total Mass:** Approx. 7.5kg (Base: 7.0kg + Sensors/Actuators).

-   **Control Topics:**

    -   `/cmd_vel` (Base Movement)

    -   `left_flap_controller/cmd_pos` (Left Flap Position)

    -   `right_flap_controller/cmd_pos` (Right Flap Position)

Prerequisites & Setup
---------------------

### Environment

-   **OS:** Ubuntu 24.04 (Noble Numbat)

-   **ROS 2 Version:** Jazzy Jalisco

-   **Simulator:** Gazebo Sim

### Installation

1.  **Clone the Repo:**

    ```
    git clone [https://github.com/Erum330/ros2_workspace.git](https://github.com/Erum330/ros2_workspace.git)
    cd ros2_workspace

    ```

2.  **Build Workspace:**

    ```
    colcon build
    source install/setup.bash

    ```

Detailed Usage Instructions
---------------------------

### 1\. Launch Simulation

Starts Gazebo, spawns the robot at origin, and opens Rviz2 using the config in `mobile_robot/rviz`.

```
ros2 launch mobile_robot launch_sim.launch.py

```

### 2\. SLAM and Map Generation

Drive the robot manually to build a map of the assessment world.

-   **Launch SLAM Node:**

    ```
    ros2 launch slam_toolbox online_async_launch.py params_file:=./src/mobile_robot/config/slam_params.yaml use_sim_time:=true

    ```

-   **Run Teleop:**

    ```
    ros2 run teleop_twist_keyboard teleop_twist_keyboard

    ```

### 3\. Localization

Load the saved environment map and localize the robot base.

```
ros2 launch nav2_bringup localization_launch.py map:=/home/erum/ros2_workspace/src/mobile_robot/maps/my_map_save.yaml use_sim_time:=true

```

-   **Important:** In Rviz2, use the **"2D Pose Estimate"** tool to align the LIDAR scan with the static map.

### 4\. Autonomous Navigation

Enable the Nav2 stack for path planning and obstacle avoidance.

```
ros2 launch mobile_robot navigation_launch.py use_sim_time:=true map_subscribe_transient_local:=true

```

-   The `map_subscribe_transient_local` flag ensures the navigation costmaps correctly receive the map from the transient-local map server.

-   Set goals in Rviz2 using the **"Nav2 Goal"** tool.

Teleoperation & Controls
------------------------

### Base Movement

Move the robot using the `teleop_twist_keyboard` standard controls (`i`, `j`, `k`, `l`, etc.).

### Flap Control (Custom Interface)

The `flap_teleop_node` provides specialized control for interacting with spheres.

```
ros2 run flap_teleop flap_teleop_node

```
| Key | Action              | RAD Command     |
|-----|---------------------|-----------------|
| Z   | Close Left Flap     | +0.1 increment  |
| A   | Open Left Flap      | -0.1 increment  |
| X   | Close Right Flap    | +0.1 increment  |
| S   | Open Right Flap     | -0.1 increment  |

Diagnostics
-----------

-   **TF Frame Map:** To generate a visualization in the `tf frames` folder:

    ```
    ros2 run tf2_tools view_frames

    ```

-   **Sensor Echo:** `ros2 topic echo /scan` or `ros2 topic echo /imu` or `ros2 topic echo /camera/image_raw`

-   **Navigation Status:** Monitor the `bt_navigator` logs in the terminal for goal success/failure.


**Youtubelink (Demonstration Video):** https://www.youtube.com/playlist?list=PL-FWyHN1v5SLbPZUL_MET56KyeF_5_Wdr

Author
------

**Erum Iftikhar**
