import os
import xacro
from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    robot_name = "flap_bot"
    package_name = "mobile_robot"

    world_arg = DeclareLaunchArgument(
        'world',
        default_value='empty.sdf',
        description='World file for Gazebo (SDF)'
    )

    x_arg = DeclareLaunchArgument('x', default_value='0.0', description='Initial X position')
    y_arg = DeclareLaunchArgument('y', default_value='0.0', description='Initial Y position')
    z_arg = DeclareLaunchArgument('z', default_value='0.6', description='Initial Z position')
    roll_arg = DeclareLaunchArgument('R', default_value='0.0', description='Initial roll')
    pitch_arg = DeclareLaunchArgument('P', default_value='0.0', description='Initial pitch')
    yaw_arg = DeclareLaunchArgument('Y', default_value='0.0', description='Initial yaw')

    world_file = LaunchConfiguration('world')
    x = LaunchConfiguration('x')
    y = LaunchConfiguration('y')
    z = LaunchConfiguration('z')
    R = LaunchConfiguration('R')
    P = LaunchConfiguration('P')
    Y = LaunchConfiguration('Y')

    pkg_share = get_package_share_directory(package_name)

    robot_model_path = os.path.join(pkg_share, 'model', 'flap_bot.xacro')
    bridge_yaml_path = os.path.join(pkg_share, 'config', 'flap_controllers.yaml')

    robot_description = xacro.process_file(robot_model_path).toxml()

    gz_launch_file = os.path.join(
        get_package_share_directory('ros_gz_sim'),
        'launch',
        'gz_sim.launch.py'
    )

    gazebo_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(gz_launch_file),
        launch_arguments={
            'gz_args': ['-r -v 4 ', world_file],
            'on_exit_shutdown': 'true'
        }.items()
    )

    spawn_robot = Node(
        package='ros_gz_sim',
        executable='create',
        arguments=[
            '-name', robot_name,
            '-string', robot_description,
            '-x', x,
            '-y', y,
            '-z', z,
            '-R', R,
            '-P', P,
            '-Y', Y,
            '-allow_renaming', 'false'
        ],
        output='screen'
    )

    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{
            'robot_description': robot_description,
            'use_sim_time': True
        }],
        output='screen'
    )

    gz_bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=[
            '--ros-args', '-p',
            f'config_file:={bridge_yaml_path}'
        ],
        output='screen'
    )

    teleop_twist = Node(
        package='teleop_twist_keyboard',
        executable='teleop_twist_keyboard',
        name='teleop_twist_keyboard',
        output='screen',
        parameters=[{'use_sim_time': True}]
    )

    flap_teleop = Node(
        package='flap_teleop',
        executable='flap_teleop_node',
        name='flap_teleop_node',
        output='screen',
        parameters=[{'use_sim_time': True}]
    )

    return LaunchDescription([
        world_arg,
        x_arg, y_arg, z_arg,
        roll_arg, pitch_arg, yaw_arg,
        gazebo_launch,
        spawn_robot,
        robot_state_publisher,
        gz_bridge,
        teleop_twist,
        flap_teleop,
    ])
