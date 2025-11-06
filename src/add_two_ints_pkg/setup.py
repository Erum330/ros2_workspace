from setuptools import find_packages, setup

package_name = 'add_two_ints_pkg'

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
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
        'minimal_server = add_two_ints_pkg.minimal_server:main',
        'minimal_client = add_two_ints_pkg.minimal_client:main',
        ],
    },
)
