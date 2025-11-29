from setuptools import find_packages
from setuptools import setup

setup(
    name='new_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('new_interfaces', 'new_interfaces.*')),
)
