#include "ros/ros.h"
#include "geometry_msgs/PointStamped.h"
#include <sstream>
#include <mouse_reader/MouseEvent.h>

/**
 * This tutorial demonstrates simple sending of messages over the ROS system.
 */
float x;
float y;
float z;

void getmouse(const mouse_reader::MouseEvent::ConstPtr& position){
  x = static_cast<float>(position->x);
  y = static_cast<float>(position->y);
  z = static_cast<float>(position->z);
}

int main(int argc, char **argv)
{

  ros::init(argc, argv, "pointvisualizer");

  ros::NodeHandle n;

  ros::Publisher visual_pub = n.advertise<geometry_msgs::PointStamped>("show_visual", 1000);
  ros::Subscriber sub = n.subscribe("mouse_event", 1000, getmouse);

  ros::Rate loop_rate(10);

  while (ros::ok())
  {
    geometry_msgs::PointStamped point_test;

    ros::Time frame_time = ros::Time::now();

    point_test.header.stamp = frame_time;
    point_test.header.frame_id = "test";

    point_test.point.x = x/100;
    point_test.point.y = y/100;
    point_test.point.z = z/100;
    

    ROS_INFO("The point is: %f, %f, %f.", point_test.point.x, point_test.point.y, point_test.point.z);

    visual_pub.publish(point_test);
    
    

    ros::spinOnce();

    loop_rate.sleep();

  }


  return 0;
}
