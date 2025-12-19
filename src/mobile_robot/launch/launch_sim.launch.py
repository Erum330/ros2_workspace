import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    # 1. Setup paths and configurations
    package_name = 'mobile_robot'
    
    # Use simulation time for Gazebo compatibility
    use_sim_time = LaunchConfiguration('use_sim_time', default='true')

    # 2. Include YOUR existing rsp.launch.py file
    # This processes your flap_tb3_bot.xacro and runs robot_state_publisher
    rsp = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory(package_name), 'launch', 'rsp.launch.py'
        )]), launch_arguments={'use_sim_time': use_sim_time}.items()
    )

    # 3. Include the Assessment World launch (spawns the 8mx8m arena and spheres)
    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('assessment_world'), 'launch', 'assessment_complete.launch.py'
        )])
    )

    # 4. Run the Gazebo 'create' node to spawn your robot
    # It pulls the URDF from the 'robot_description' topic published by your RSP
    spawn_entity = Node(
        package='ros_gz_sim',
        executable='create',
        arguments=['-topic', 'robot_description', 
                   '-entity', 'flap_tb3_bot', 
                   '-z', '0.5'], # Spawn slightly above ground to prevent clipping
        output='screen'
    )

    return LaunchDescription([
        DeclareLaunchArgument('use_sim_time', default_value='true'),
        gazebo,
        rsp,
        spawn_entity
    ])