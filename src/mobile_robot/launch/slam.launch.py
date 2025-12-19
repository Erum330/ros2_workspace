import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    # 1. Setup paths
    package_name = 'mobile_robot'
    pkg_share = get_package_share_directory(package_name)
    
    # 2. Declare Spatial Arguments (x, y, z, R, P, Y)
    # These allow you to change the spawn position from the terminal
    spatial_args = [
        DeclareLaunchArgument('x', default_value='0.0'),
        DeclareLaunchArgument('y', default_value='0.0'),
        DeclareLaunchArgument('z', default_value='0.5'),
        DeclareLaunchArgument('R', default_value='0.0'),
        DeclareLaunchArgument('P', default_value='0.0'),
        DeclareLaunchArgument('Y', default_value='0.0'),
        DeclareLaunchArgument('use_sim_time', default_value='true')
    ]

    # 3. Include your BASE launch file (RSP + Gazebo + Bridge)
    # Assuming your base file is named 'gazebo_spawn.launch.py'
    base_sim = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            pkg_share, 'launch', 'launch_sim.launch.py'
        )]),
        launch_arguments={
            'x': LaunchConfiguration('x'),
            'y': LaunchConfiguration('y'),
            'z': LaunchConfiguration('z'),
            'R': LaunchConfiguration('R'),
            'P': LaunchConfiguration('P'),
            'Y': LaunchConfiguration('Y'),
            'use_sim_time': LaunchConfiguration('use_sim_time')
        }.items()
    )

    # 4. SLAM Toolbox Node (Mapping)
    slam_params = os.path.join(pkg_share, 'config', 'slam_params.yaml')
    slam = Node(
        package='slam_toolbox',
        executable='sync_slam_toolbox_node',
        name='slam_toolbox',
        output='screen',
        parameters=[slam_params, {'use_sim_time': True}]
    )

    # 5. RViz2 Node (Visualization)
    rviz_config = os.path.join(pkg_share, 'rviz', 'slam.rviz')
    rviz = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        arguments=['-d', rviz_config],
        parameters=[{'use_sim_time': True}],
        output='screen'
    )

    # 6. Build Launch Description
    ld = LaunchDescription()
    for arg in spatial_args:
        ld.add_action(arg)
    ld.add_action(base_sim)
    ld.add_action(slam)
    ld.add_action(rviz)
    
    return ld