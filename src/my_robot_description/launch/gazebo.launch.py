from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue
from launch.substitutions import Command
import os
from ament_index_python.packages import get_package_share_path


def generate_launch_description():

    pkg_path = get_package_share_path('my_robot_description')
    urdf_path = os.path.join(pkg_path, 'urdf', 'my_robot.urdf.xacro')

    # ---------------------------
    # Use ros_gz (Gazebo Harmonic/Garden)
    # ---------------------------
    gz_pkg = get_package_share_path('ros_gz_sim')
    gazebo_launch = os.path.join(gz_pkg, 'launch', 'gz_sim.launch.py')

    # Convert Xacro → URDF
    robot_description = ParameterValue(
        Command(['xacro', ' ', urdf_path]),
        value_type=str
    )

    # Robot state publisher
    robot_state_pub = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        parameters=[{"robot_description": robot_description}]
    )

    # Spawn robot into Gazebo using ros_gz service
    spawn_entity = Node(
        package="ros_gz_sim",
        executable="create",
        arguments=[
            "-name", "my_robot",
            "-topic", "robot_description",
            "-allow_renaming", "true",
        ],
        output="screen"
    )

    # Start Gazebo Harmonic
    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(gazebo_launch),
        launch_arguments={"gz_args": "-r empty.sdf"}.items(),
    )

    return LaunchDescription([
        gazebo,
        robot_state_pub,
        spawn_entity
    ])
