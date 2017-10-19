#include "ros/ros.h"
#include "geometry_msgs/PointStamped.h"
#include <sstream>

/**
 * This tutorial demonstrates simple sending of messages over the ROS system.
 */
int main(int argc, char **argv)
{

  ros::init(argc, argv, "pointvisualizer");

  ros::NodeHandle n;

  ros::Publisher visual_pub = n.advertise<geometry_msgs::PointStamped>("show_visual", 1000);

  ros::Rate loop_rate(10);

  int count = 1;

  while (ros::ok())
  {
    geometry_msgs::PointStamped point_test;

    ros::Time frame_time = ros::Time::now();

    point_test.header.stamp = frame_time;
    point_test.header.frame_id = "test";

    if (count % 2 == 1)
    {
      point_test.point.x = 1;
      point_test.point.y = 2;
      point_test.point.z = 3;
    }
    else
    {
      point_test.point.x = 3;
      point_test.point.y = 1;
      point_test.point.z = 2;
    }
    

    ROS_INFO("The point is: %f, %f, %f.", point_test.point.x, point_test.point.y, point_test.point.z);

    visual_pub.publish(point_test);
    
    

    ros::spinOnce();

    loop_rate.sleep();

    count++;
  }


  return 0;
}
