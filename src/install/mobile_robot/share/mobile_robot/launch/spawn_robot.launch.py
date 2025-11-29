import os
import xacro
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node

def generate_launch_description():

    pkg_name = 'mobile_robot'
    xacro_file = os.path.join(get_package_share_directory(pkg_name), 'model', 'robot.xacro')
    robot_description = xacro.process_file(xacro_file).toxml()

    # Gazebo launch
    gazebo_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('ros_gz_sim'), 'launch', 'gz_sim.launch.py')
        ),
        launch_arguments={'gz_args': ' -r -v 4 empty.sdf'}.items()
    )

    # Robot state publisher
    rsp_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{'robot_description': robot_description, 'use_sim_time': True}],
        output='screen'
    )

    # Spawn robot in Gazebo
    spawn_node = Node(
        package='ros_gz_sim',
        executable='create',
        arguments=['-topic', 'robot_description', '-name', 'mobile_robot'],
        output='screen'
    )

    # ROS-GZ Bridge
    bridge_params = os.path.join(get_package_share_directory(pkg_name), 'parameters', 'bridge_parameters.yaml')
    bridge_node = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=['--ros-args', '-p', f'config_file:={bridge_params}'],
        output='screen'
    )

    # Controller spawners
    controllers = ['diffbot_base_controller', 'left_flap_controller', 'right_flap_controller']
    controller_nodes = []
    for c in controllers:
        controller_nodes.append(
            Node(
                package='controller_manager',
                executable='spawner',
                arguments=[c],
                output='screen'
            )
        )

    ld = LaunchDescription()
    ld.add_action(gazebo_launch)
    ld.add_action(rsp_node)
    ld.add_action(spawn_node)
    ld.add_action(bridge_node)
    for cn in controller_nodes:
        ld.add_action(cn)

    return ld

