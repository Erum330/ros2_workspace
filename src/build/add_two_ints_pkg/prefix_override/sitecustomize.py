import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/erum/ros2_workspace/src/install/add_two_ints_pkg'
