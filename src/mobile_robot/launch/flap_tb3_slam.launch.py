import os
import xacro
from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    robot_name = "flap_tb3_bot"
    package_name = "mobile_robot"

    # ============================
    # DEFAULT WORLD = ASSESSMENT WORLD
    # ============================
    default_world = os.path.join(
        get_package_share_directory('assessment_world'),
        'worlds',
        'assessment.sdf'
    )

    world_arg = DeclareLaunchArgument(
        'world',
        default_value=default_world,
        description='Gazebo world file (assessment world by default)'
    )

    x_arg = DeclareLaunchArgument('x', default_value='0.0')
    y_arg = DeclareLaunchArgument('y', default_value='0.0')
    z_arg = DeclareLaunchArgument('z', default_value='0.6')
    R_arg = DeclareLaunchArgument('R', default_value='0.0')
    P_arg = DeclareLaunchArgument('P', default_value='0.0')
    Y_arg = DeclareLaunchArgument('Y', default_value='0.0')

    world = LaunchConfiguration('world')
    x = LaunchConfiguration('x')
    y = LaunchConfiguration('y')
    z = LaunchConfiguration('z')
    R = LaunchConfiguration('R')
    P = LaunchConfiguration('P')
    Y = LaunchConfiguration('Y')

    pkg_share = get_package_share_directory(package_name)

    xacro_file = os.path.join(pkg_share, 'model', 'flap_tb3_bot.xacro')
    bridge_yaml = os.path.join(pkg_share, 'config', 'flap_tb3_bridge.yaml')
    slam_params = os.path.join(pkg_share, 'config', 'slam_params.yaml')

    robot_description = xacro.process_file(xacro_file).toxml()

    # Gazebo (ros_gz_sim)
    gz_launch_file = os.path.join(
        get_package_share_directory('ros_gz_sim'),
        'launch',
        'gz_sim.launch.py'
    )

    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(gz_launch_file),
        launch_arguments={
            'gz_args': ['-r -v 4 ', world],
            'on_exit_shutdown': 'true'
        }.items()
    )

    # Spawn robot into Gazebo
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

    # Robot state publisher
    rsp = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{
            'robot_description': robot_description,
            'use_sim_time': True
        }],
        output='screen'
    )

    # ROS <-> Gazebo bridge
    bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=[
            '--ros-args', '-p',
            f'config_file:={bridge_yaml}'
        ],
        output='screen'
    )

    # SLAM toolbox node
    slam = Node(
        package='slam_toolbox',
        executable='sync_slam_toolbox_node',
        name='slam_toolbox',
        parameters=[slam_params],
        output='screen'
    )

    # RViz2
    rviz = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        parameters=[{'use_sim_time': True}]
    )

    return LaunchDescription([
        world_arg,
        x_arg, y_arg, z_arg,
        R_arg, P_arg, Y_arg,
        gazebo,
        spawn_robot,
        rsp,
        bridge,
        slam,
        rviz,
    ])