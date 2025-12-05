from setuptools import setup

package_name = 'flap_teleop'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='erum',
    maintainer_email='58556663+Erum330@users.noreply.github.com',
    description='ROS 2 flap teleoperation node',
    license='Apache License 2.0',
    entry_points={
        'console_scripts': [
            'flap_teleop_node = flap_teleop.flap_teleop_node:main',
        ],
    },
)
