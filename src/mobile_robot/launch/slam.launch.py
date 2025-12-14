import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():

    pkg_mobile_robot = get_package_share_directory('mobile_robot')

    # (Optional) let Gazebo find models/resources in your workspace (same idea as your template)
    gazebo_models_path, _ = os.path.split(pkg_mobile_robot)
    if "GZ_SIM_RESOURCE_PATH" in os.environ:
        os.environ["GZ_SIM_RESOURCE_PATH"] += os.pathsep + gazebo_models_path
    else:
        os.environ["GZ_SIM_RESOURCE_PATH"] = gazebo_models_path

    # -----------------------
    # Launch arguments
    # -----------------------
    rviz_launch_arg = DeclareLaunchArgument(
        'rviz', default_value='true',
        description='Open RViz'
    )

    rviz_config_arg = DeclareLaunchArgument(
        'rviz_config', default_value='flap_robot_slam.rviz',
        description='RViz config file (from mobile_robot/rviz)'
    )

    sim_time_arg = DeclareLaunchArgument(
        'use_sim_time', default_value='True',
        description='Flag to enable use_sim_time'
    )

    launch_slam_arg = DeclareLaunchArgument(
        'slam', default_value='true',
        description='Launch slam_toolbox if true'
    )

    # -----------------------
    # RViz node
    # -----------------------
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        arguments=[
            '-d',
            PathJoinSubstitution([pkg_mobile_robot, 'rviz', LaunchConfiguration('rviz_config')])
        ],
        condition=IfCondition(LaunchConfiguration('rviz')),
        parameters=[
            {'use_sim_time': LaunchConfiguration('use_sim_time')},
        ],
        output='screen'
    )

    # -----------------------
    # Slam toolbox include (optional)
    # -----------------------
    slam_toolbox_launch_path = os.path.join(
        get_package_share_directory('slam_toolbox'),
        'launch',
        'online_async_launch.py'
    )

    slam_toolbox_params_path = os.path.join(
        get_package_share_directory('mobile_robot'),
        'config',
        'slam_params.yaml'
    )

    slam_toolbox_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(slam_toolbox_launch_path),
        launch_arguments={
            'use_sim_time': LaunchConfiguration('use_sim_time'),
            'slam_params_file': slam_toolbox_params_path,
        }.items(),
        condition=IfCondition(LaunchConfiguration('slam'))
    )

    # -----------------------
    # Build LaunchDescription
    # -----------------------
    ld = LaunchDescription()
    ld.add_action(rviz_launch_arg)
    ld.add_action(rviz_config_arg)
    ld.add_action(sim_time_arg)
    ld.add_action(launch_slam_arg)
    ld.add_action(rviz_node)
    ld.add_action(slam_toolbox_launch)

    return ld
