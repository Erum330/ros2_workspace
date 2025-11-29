import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, OpaqueFunction
from launch.substitutions import LaunchConfiguration, Command, FindExecutable, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
import xacro

# This function is used to process the XACRO file during the launch process.
# We use OpaqueFunction to correctly pass the processed URDF to the nodes.
def launch_setup(context, *args, **kwargs):
    # Get the paths using the FindPackageShare substitution
    urdf_path_sub = PathJoinSubstitution([
        FindPackageShare('my_robot_description'),
        'urdf',
        'my_robot.urdf.xacro'
    ])
    
    rviz_config_path_sub = PathJoinSubstitution([
        FindPackageShare('my_robot_description'),
        'rviz',
        'urdf_config.rviz'
    ])

    # 1. Robot State Publisher Node
    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[{
            # Command substitution is used to execute xacro and get the output string
            'robot_description': Command(['xacro ', urdf_path_sub])
        }]
    )

    # 2. Controller Manager Node
    controller_manager_node = Node(
        package='controller_manager',
        executable='ros2_control_node',
        output='screen',
        parameters=[
            # This loads parameters from the specified YAML file
            PathJoinSubstitution([
                FindPackageShare('my_robot_bringup'),
                'config',
                'my_robot_controllers.yaml'
            ])
        ]
    )

    # 3. Spawners (Load and activate controllers)
    joint_state_broadcaster_spawner = Node(
        package='controller_manager',
        executable='spawner',
        arguments=['joint_state_broadcaster', '-c', '/controller_manager'],
    )
    
    diff_drive_controller_spawner = Node(
        package='controller_manager',
        executable='spawner',
        arguments=['diff_drive_controller', '-c', '/controller_manager'],
    )

    # 4. RViz Node
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        output='screen',
        arguments=['-d', rviz_config_path_sub]
    )

    # Return all actions to be executed
    return [
        robot_state_publisher_node,
        controller_manager_node,
        joint_state_broadcaster_spawner,
        diff_drive_controller_spawner,
        rviz_node
    ]

def generate_launch_description():
    # The actual launch description uses OpaqueFunction to execute the setup logic
    return LaunchDescription([
        OpaqueFunction(function=launch_setup)
    ])