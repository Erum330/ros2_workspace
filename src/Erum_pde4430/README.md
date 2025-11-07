PDE4430 TurtleSim Formative Exercise (ROS 2)
============================================

## TASK 1: Discoveries

1.  `/teleop_turtle` is the publisher node that sends velocity commands to the turtle.\
    Publishers:
    
     /parameter_event

     /rosout

     /turtle1/cmd_vel
    
3.  `/turtle1/cmd_vel
    Type: geometry_msgs/msg/Twist`

4.  Publication frequency is not constant as it depends on user input\
    When keys are pressed intermittently, the observed publication rate ranges between 1--3 Hz. However, when a key is held down continuously, the node publishes       velocity messages at an approximate rate of 10 Hz.

    average rate: 0.773
	
    min: 0.836s max: 1.752s std dev: 0.45799s window: 2
	
    average rate: 0.622
	
    min: 0.836s max: 2.232s std dev: 0.57907s window: 3

5.  `/turtle1/pose
    Type: turtlesim/msg/Pose`

6.  `ros2 topic echo /turtle1/color_sensor`\
    r: 179 
	
	g: 184 
	
	b: 255
## TASK 2: Autonomous Movement

All nodes are registered as console scripts in `setup.py`. The node name is shown in the table.

| Task | Node Name | Description | File Name |
| :--- | :--- | :--- | :--- |
| **2.1** | `straight_mover` | Moves the turtle in a straight line indefinitely. | `straightmove.py` |
| **2.2** | `circle_mover` | Moves the turtle in a circle with a radius of 2.0. | `circular_move.py` |
| **2.3** | `figure8_move` | **Advanced:** Moves the turtle along a parametric figure-8 (lemniscate) curve. | `figure8_move.py` |
| **2.4** | `roomba_cleaner` | **More Advanced:** Implements the **Boustrophedon (Serpentine)** path planning algorithm to efficiently cover the blue area. | `roomba_cleaner.py` |
| **2.5** | `multi_roomba_cleaner` | **Most Advanced:** Spawns 4 turtles and divides the world into 4 quadrants for parallel coverage. | `4bots.py` |

 **Running Task 2 Nodes**

**Ensure the TurtleSim node is running (Terminal 1) before running these commands in Terminal 2.**

**Example: Run the Straight Mover**

`ros2 run Erum_pde4430 straightmove`

**Example: Run the Circle Mover**

`ros2 run Erum_pde4430 circular_move`

**Example: Run the Figure 8 Movement (The turtle will teleport to the center)**

`ros2 run Erum_pde4430 figure8_move`

**Example: Run the Single-Turtle Roomba Cleaner**

`ros2 run Erum_pde4430 roomba_cleaner`

**Example: Run the Multi-Turtle Cleaner (Spawns 4 turtles for simultaneous cleaning)
NOTE: Turtle 1 (the original) is cleared, and 4 new turtles are spawned.**

`ros2 run Erum_pde4430 4bots`


## TASK 3: User Input and Advanced Interaction

These nodes require user input directly in the terminal where they are executed.

### 3.1: User Input for Linear and Angular Speed

-   **Node Name:** `turtle_driver`

-   **File Name:** `userinput.py`

-   **Instructions:** The node will prompt the user to enter a linear and angular speed upon startup.

Terminal 2: Run the Speed Input Driver

`ros2 run Erum_pde4430 userinput`

 Output/Interaction in Terminal 2:
 
 Enter linear speed (e.g., 2.0): 3.5
 
 Enter angular speed (e.g., 1.0 for turning): 0.5
 
 ... The turtle will start moving

### 3.2: User Defined Coordinates (Go to Goal)

-   **Node Name:** `turtle_mover`

-   **File Name:** `user_coordinates.py`

-   **Instructions:** The node will prompt the user for target coordinates (X, Y) and use a proportional controller to guide the turtle to that exact point and stop.

Terminal 2: Run the Go to Goal Mover
`ros2 run Erum_pde4430 user_coordinates`

 Output/Interaction in Terminal 2:
 
 Enter target x coordinate (0.5 to 10.5): 8.0
 
 Enter target y coordinate (0.5 to 10.5): 2.5
 
 ... The turtle will move to (8.0, 2.5) and then stop




