TASK 1
1. /teleop_turtle is the publisher node that sends velocity commands to the turtle.
 Publishers:
    /parameter_events
    /rosout
    /turtle1/cmd_vel
2. /turtle1/cmd_vel
Type: geometry_msgs/msg/Twist
3. Publication frequency is not constant as it depends on user input 
When keys are pressed intermittently, the observed publication rate ranges between 1–3 Hz. However, when a key is held down continuously, the node publishes velocity messages at an approximate rate of 10 Hz.
average rate: 0.773
	min: 0.836s max: 1.752s std dev: 0.45799s window: 2
average rate: 0.622
	min: 0.836s max: 2.232s std dev: 0.57907s window: 3
4./turtle1/pose
Type: turtlesim/msg/Pose
5.ros2 topic echo /turtle1/color_sensor
r: 179
g: 184
b: 255



