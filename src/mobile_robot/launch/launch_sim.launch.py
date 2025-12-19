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
    pkg_share = get_package_share_directory(package_name)
    
    # Use simulation time for Gazebo compatibility
    use_sim_time = LaunchConfiguration('use_sim_time', default='true')

    # Path to your bridge YAML file
    bridge_yaml = os.path.join(pkg_share, 'config', 'flap_tb3_bridge.yaml')

    # 2. Include YOUR existing rsp.launch.py file
    rsp = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            pkg_share, 'launch', 'rsp.launch.py'
        )]), launch_arguments={'use_sim_time': use_sim_time}.items()
    )

    # 3. Include the Assessment World launch
    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('assessment_world'), 'launch', 'assessment_complete.launch.py'
        )])
    )

    # 4. Run the Gazebo 'create' node to spawn your robot
    spawn_entity = Node(
        package='ros_gz_sim',
        executable='create',
        arguments=['-topic', 'robot_description', 
                   '-entity', 'flap_tb3_bot', 
                   '-z', '0.5'], 
        output='screen'
    )

    # 5. ADDED: ROS-Gazebo Bridge node using your YAML file
    bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=[
            '--ros-args', '-p',
            f'config_file:={bridge_yaml}'
        ],
        output='screen'
    )

    return LaunchDescription([
        DeclareLaunchArgument('use_sim_time', default_value='true'),
        gazebo,
        rsp,
        spawn_entity,
        bridge
    ])