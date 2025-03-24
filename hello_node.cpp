#include "ros/ros.h"
int main(int argc, char **argv)
{
ros::init(argc,argv,"hello_node1");
ros::NodeHandle nh;
ROS_INFO("Hello World from Melodic ROS");
ros::spin();
return 0;
}
