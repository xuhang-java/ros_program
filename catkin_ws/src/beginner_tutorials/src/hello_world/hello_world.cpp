#include "ros/ros.h"
int main(int argc,char **argv)
{
  ros::init(argc,argv,"hello_world");
  ros::NodeHandle n;
  ROS_INFO("hello world.");
  ros::spin();
  return 0;
}
