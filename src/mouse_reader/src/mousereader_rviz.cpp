#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ros/ros.h"
#include "geometry_msgs/PointStamped.h"
#include <mouse_reader/MouseEvent.h>
#include <linux/input.h>
#include <fcntl.h>

float x;
float y;
float z;

void getmouse(const mouse_reader::MouseEvent::ConstPtr& position){
  x += static_cast<float>(position->x);
  y += static_cast<float>(position->y);
  z = static_cast<float>(position->z);
}


int main(int argc, char **argv)
{
  ros::init(argc, argv, "mousereader_rviz");
  ros::NodeHandle n;
  ros::Publisher mouse_pub = n.advertise<geometry_msgs::PointStamped>("mouse_event_rviz", 1000);
  ros::Subscriber sub = n.subscribe("mouse_event", 1000, getmouse);
  ros::Rate loop_rate(10);

  while(ros::ok()) {
    geometry_msgs::PointStamped pointer;
    pointer.header.frame_id = "test";
    pointer.point.x = x/100;
    pointer.point.y = y/100;
    pointer.point.z = z/100;
    mouse_pub.publish(pointer);
    ROS_INFO("Published msg: Point [%f %f %f]", pointer.point.x, pointer.point.y, pointer.point.z);
    ros::spinOnce();

    loop_rate.sleep();
  }
  
  return 0;
}
