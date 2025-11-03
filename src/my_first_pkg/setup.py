from setuptools import find_packages, setup

package_name = 'my_first_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='erum',
    maintainer_email='58556663+Erum330@users.noreply.github.com',
    description='My first ROS 2 package',
    license='Apache License 2.0',
    extras_require={
        'test': ['pytest'],
    },
    entry_points={
        'console_scripts': [
            'minimal_publisher = my_first_pkg.minimal_publisher:main',
            'minimal_subscriber = my_first_pkg.minimal_subscriber:main',
        ],
    },
)
