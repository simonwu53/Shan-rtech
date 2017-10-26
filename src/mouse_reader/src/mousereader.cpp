#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ros/ros.h"
#include "geometry_msgs/PointStamped.h"
#include <mouse_reader/MouseEvent.h>
#include <linux/input.h>
#include <fcntl.h>
//#include <X11/Xlib.h>

#define MOUSEFILE "/dev/input/event16"

int main(int argc, char **argv)
{
  int fd;
  struct input_event ie;
  fd = open(MOUSEFILE, O_RDONLY);
  ros::init(argc, argv, "mousereader");
  ros::NodeHandle n;
  ros::Publisher mouse_pub = n.advertise<mouse_reader::MouseEvent>("mouse_event", 1000);
  ros::Rate loop_rate(10);

  while(ros::ok()) {
    mouse_reader::MouseEvent mouse_point;
    ros::Time frame_time = ros::Time::now();
    while(read(fd, &ie, sizeof(struct input_event))) {
      if (ie.type == 2) {
        if (ie.code == 0) {
            mouse_point.x+=ie.value;
            }
        if (ie.code == 1) {
            mouse_point.y+=ie.value;
            }
        mouse_point.z = 1;
        ROS_INFO("time%ld.%06ld\tx %d\ty %d\tz %d\n",
           ie.time.tv_sec, ie.time.tv_usec, mouse_point.x, mouse_point.y, mouse_point.z);
        mouse_pub.publish(mouse_point);
      } else {
        //printf("time %ld.%06ld\ttype %d\tcode %d\tvalue %d\n",
            //ie.time.tv_sec, ie.time.tv_usec, ie.type, ie.code, ie.value);
      }
    }
    
    ros::spinOnce();

    loop_rate.sleep();
  }
  
  return 0;
}
