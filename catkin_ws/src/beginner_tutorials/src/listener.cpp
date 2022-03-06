
#include "ros/ros.h"
#include "std_msgs/Float64.h"
#include "sensor_msgs/JointState.h"

void chatterCallback(const sensor_msgs::JointStateConstPtr& msg)
{
  float pos[3],vel[3];
  pos[0]=msg->position[0];
  pos[1]=msg->position[1];
  pos[2]=msg->position[2];
  vel[0]=msg->velocity[0];
  vel[1]=msg->velocity[1];
  vel[2]=msg->velocity[2];
  ROS_INFO("I heard: [%f]",pos[1]);
//  ROS_INFO("I heard: [%f] [%f] [%f] [%f] [%f] [%f]",pos[0],pos[1],pos[2],vel[0],vel[1],vel[2]);

}


int main(int argc, char **argv)
{
  
  ros::init(argc, argv, "listener");

  ros::NodeHandle n;

// %Tag(SUBSCRIBER)%
  ros::Subscriber sub = n.subscribe("/zhhwur/joint_states", 1000, chatterCallback);

  ros::spin();

  return 0;
}
