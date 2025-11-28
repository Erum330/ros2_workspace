#!/usr/bin/env python3
"""
ROS 2 Jazzy + ros_gz launch file:
- Starts Gazebo server
- Spawns ball_bot URDF
- Bridges cmd_vel, odom, LIDAR, camera
- Publishes robot_state_publisher TFs
- Optional RViz2
"""

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution, Command
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.conditions import IfCondition

def generate_launch_description():

    urdf_file = PathJoinSubstitution(
        [FindPackageShare("ball_bot_description"), "urdf", "ball_bot.urdf"]
    )

    use_rviz = LaunchConfiguration("use_rviz", default="true")

    return LaunchDescription([

        # Launch argument to optionally run RViz
        DeclareLaunchArgument(
            "use_rviz",
            default_value="true",
            description="Whether to launch RViz"
        ),

        # Gazebo server
        Node(
            package="ros_gz_sim",
            executable="gzserver",
            name="gzserver",
            output="screen",
            arguments=["-r", "--verbose"]
        ),

        # Robot State Publisher
        Node(
            package="robot_state_publisher",
            executable="robot_state_publisher",
            name="robot_state_publisher",
            output="screen",
            parameters=[{
                "use_sim_time": True,
                "robot_description": Command(['xacro ', urdf_file])
            }]
        ),

        # Spawn robot
        Node(
            package="ros_gz_sim",
            executable="create",
            name="spawn_ball_bot",
            arguments=[
                "-file", urdf_file,
                "-name", "ball_bot",
                "-x", "0",
                "-y", "0",
                "-z", "0.1"
            ],
            output="screen"
        ),

        # ROS ↔ Gazebo bridges
        Node(
            package="ros_gz_bridge",
            executable="parameter_bridge",
            name="cmd_vel_bridge",
            arguments=["/cmd_vel@geometry_msgs/msg/Twist@ignition.msgs.Twist"],
            output="screen"
        ),

        Node(
            package="ros_gz_bridge",
            executable="parameter_bridge",
            name="odom_bridge",
            arguments=["/odom@nav_msgs/msg/Odometry@ignition.msgs.Odometry"],
            output="screen"
        ),

        Node(
            package="ros_gz_bridge",
            executable="parameter_bridge",
            name="lidar_bridge",
            arguments=["/lidar@sensor_msgs/msg/LaserScan@ignition.msgs.LaserScan"],
            output="screen"
        ),

        Node(
            package="ros_gz_bridge",
            executable="parameter_bridge",
            name="camera_bridge",
            arguments=["/camera/image_raw@sensor_msgs/msg/Image@ignition.msgs.Image"],
            output="screen"
        ),

        # Optional RViz2
        Node(
            package="rviz2",
            executable="rviz2",
            name="rviz2",
            condition=IfCondition(use_rviz),
            arguments=[
                "-d",
                PathJoinSubstitution([
                    FindPackageShare("ball_bot_description"), "rviz", "ball_bot.rviz"
                ])
            ],
            output="screen"
        ),
    ])
