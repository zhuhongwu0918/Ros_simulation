# mygit
cd ~/zhhw/catkin_ws

catkin_make

source ./devel/setup.bash

roslaunch zhhwur zhhwur_control.launch

Open a new terminal:
rosrun beginner_tutorials talker
Open another terminal:
rosrun beginner_tutorials listener
