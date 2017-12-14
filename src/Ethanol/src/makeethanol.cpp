#include "ros/ros.h"
#include <sstream>
#include "visualization_msgs/Marker.h"



int main(int argc, char **argv)
{

  ros::init(argc, argv, "makeethanol");

  ros::NodeHandle n;

  ros::Publisher visual_pub = n.advertise<visualization_msgs::Marker>("show_ethanol", 0);
  
  sleep(5);

  visualization_msgs::Marker marker;
  marker.header.frame_id = "test";
  marker.header.stamp = ros::Time();
  marker.ns = "my_namespace";
  marker.id = 0;
  marker.type = visualization_msgs::Marker::SPHERE;
  marker.action = visualization_msgs::Marker::ADD;
  marker.pose.position.x = 0.5;
  marker.pose.position.y = 0;
  marker.pose.position.z = 1;
  marker.pose.orientation.x = 0.0;
  marker.pose.orientation.y = 0.0;
  marker.pose.orientation.z = 0.0;
  marker.pose.orientation.w = 1.0;
  marker.scale.x = 1;
  marker.scale.y = 1;
  marker.scale.z = 1;
  marker.color.a = 1.0; // Don't forget to set the alpha!
  marker.color.r = 1.0;
  marker.color.g = 0.0;
  marker.color.b = 0.0;
  //only if using a MESH_RESOURCE marker type:
  //marker.mesh_resource = "package://pr2_description/meshes/base_v0/base.dae";
  visual_pub.publish(marker);
  
  visualization_msgs::Marker marker2;
  marker2.header.frame_id = "test";
  marker2.header.stamp = ros::Time();
  marker2.ns = "my_namespace";
  marker2.id = 1;
  marker2.type = visualization_msgs::Marker::SPHERE;
  marker2.action = visualization_msgs::Marker::ADD;
  marker2.pose.position.x = 3;
  marker2.pose.position.y = 0;
  marker2.pose.position.z = 1;
  marker2.pose.orientation.x = 0.0;
  marker2.pose.orientation.y = 0.0;
  marker2.pose.orientation.z = 0.0;
  marker2.pose.orientation.w = 1.0;
  marker2.scale.x = 1;
  marker2.scale.y = 1;
  marker2.scale.z = 1;
  marker2.color.a = 1.0; // Don't forget to set the alpha!
  marker2.color.r = 0.0;
  marker2.color.g = 0.0;
  marker2.color.b = 0.0;
  visual_pub.publish(marker2);
  
  visualization_msgs::Marker marker3;
  marker3.header.frame_id = "test";
  marker3.header.stamp = ros::Time();
  marker3.ns = "my_namespace";
  marker3.id = 2;
  marker3.type = visualization_msgs::Marker::CYLINDER;
  marker3.action = visualization_msgs::Marker::ADD;
  marker3.pose.position.x = 1.75;
  marker3.pose.position.y = 0;
  marker3.pose.position.z = 1;
  marker3.pose.orientation.x = 0.0;
  marker3.pose.orientation.y = 0.5;
  marker3.pose.orientation.z = 0.0;
  marker3.pose.orientation.w = 0.5;
  marker3.scale.x = 0.4;
  marker3.scale.y = 0.4;
  marker3.scale.z = 2.0;
  marker3.color.a = 1.0; // Don't forget to set the alpha!
  marker3.color.r = 0.5;
  marker3.color.g = 0.5;
  marker3.color.b = 0.5;
  visual_pub.publish(marker3);
  
  //three small balls
  visualization_msgs::Marker marker4;
  marker4.header.frame_id = "test";
  marker4.header.stamp = ros::Time();
  marker4.ns = "my_namespace";
  marker4.id = 3;
  marker4.type = visualization_msgs::Marker::SPHERE;
  marker4.action = visualization_msgs::Marker::ADD;
  marker4.pose.position.x = 3;
  marker4.pose.position.y = 0;
  marker4.pose.position.z = -0.2;
  marker4.pose.orientation.x = 0.0;
  marker4.pose.orientation.y = 0.0;
  marker4.pose.orientation.z = 0.0;
  marker4.pose.orientation.w = 1.0;
  marker4.scale.x = 0.5;
  marker4.scale.y = 0.5;
  marker4.scale.z = 0.5;
  marker4.color.a = 1.0; // Don't forget to set the alpha!
  marker4.color.r = 0.9;
  marker4.color.g = 0.9;
  marker4.color.b = 0.9;
  visual_pub.publish(marker4);
  
  visualization_msgs::Marker marker5;
  marker5.header.frame_id = "test";
  marker5.header.stamp = ros::Time();
  marker5.ns = "my_namespace";
  marker5.id = 4;
  marker5.type = visualization_msgs::Marker::SPHERE;
  marker5.action = visualization_msgs::Marker::ADD;
  marker5.pose.position.x = 3;
  marker5.pose.position.y = 1.2;
  marker5.pose.position.z = 1;
  marker5.pose.orientation.x = 0.0;
  marker5.pose.orientation.y = 0.0;
  marker5.pose.orientation.z = 0.0;
  marker5.pose.orientation.w = 1.0;
  marker5.scale.x = 0.5;
  marker5.scale.y = 0.5;
  marker5.scale.z = 0.5;
  marker5.color.a = 1.0; // Don't forget to set the alpha!
  marker5.color.r = 0.9;
  marker5.color.g = 0.9;
  marker5.color.b = 0.9;
  visual_pub.publish(marker5);
  
  visualization_msgs::Marker marker6;
  marker6.header.frame_id = "test";
  marker6.header.stamp = ros::Time();
  marker6.ns = "my_namespace";
  marker6.id = 5;
  marker6.type = visualization_msgs::Marker::SPHERE;
  marker6.action = visualization_msgs::Marker::ADD;
  marker6.pose.position.x = 3;
  marker6.pose.position.y = 0;
  marker6.pose.position.z = 2.2;
  marker6.pose.orientation.x = 0.0;
  marker6.pose.orientation.y = 0.0;
  marker6.pose.orientation.z = 0.0;
  marker6.pose.orientation.w = 1.0;
  marker6.scale.x = 0.5;
  marker6.scale.y = 0.5;
  marker6.scale.z = 0.5;
  marker6.color.a = 1.0; // Don't forget to set the alpha!
  marker6.color.r = 0.9;
  marker6.color.g = 0.9;
  marker6.color.b = 0.9;
  visual_pub.publish(marker6);
  
  // 3 cylinders
  visualization_msgs::Marker marker7;
  marker7.header.frame_id = "test";
  marker7.header.stamp = ros::Time();
  marker7.ns = "my_namespace";
  marker7.id = 6;
  marker7.type = visualization_msgs::Marker::CYLINDER;
  marker7.action = visualization_msgs::Marker::ADD;
  marker7.pose.position.x = 3.0;
  marker7.pose.position.y = 0.6;
  marker7.pose.position.z = 1;
  marker7.pose.orientation.x = 0.5;
  marker7.pose.orientation.y = 0.0;
  marker7.pose.orientation.z = 0.0;
  marker7.pose.orientation.w = 0.5;
  marker7.scale.x = 0.2;
  marker7.scale.y = 0.2;
  marker7.scale.z = 1.2;
  marker7.color.a = 1.0; // Don't forget to set the alpha!
  marker7.color.r = 0.5;
  marker7.color.g = 0.5;
  marker7.color.b = 0.5;
  visual_pub.publish(marker7);
  
  visualization_msgs::Marker marker8;
  marker8.header.frame_id = "test";
  marker8.header.stamp = ros::Time();
  marker8.ns = "my_namespace";
  marker8.id = 7;
  marker8.type = visualization_msgs::Marker::CYLINDER;
  marker8.action = visualization_msgs::Marker::ADD;
  marker8.pose.position.x = 3.0;
  marker8.pose.position.y = 0.0;
  marker8.pose.position.z = 0.4;
  marker8.pose.orientation.x = 0.0;
  marker8.pose.orientation.y = 0.0;
  marker8.pose.orientation.z = 0.0;
  marker8.pose.orientation.w = 1.0;
  marker8.scale.x = 0.2;
  marker8.scale.y = 0.2;
  marker8.scale.z = 1.2;
  marker8.color.a = 1.0; // Don't forget to set the alpha!
  marker8.color.r = 0.5;
  marker8.color.g = 0.5;
  marker8.color.b = 0.5;
  visual_pub.publish(marker8);
  
  visualization_msgs::Marker marker9;
  marker9.header.frame_id = "test";
  marker9.header.stamp = ros::Time();
  marker9.ns = "my_namespace";
  marker9.id = 8;
  marker9.type = visualization_msgs::Marker::CYLINDER;
  marker9.action = visualization_msgs::Marker::ADD;
  marker9.pose.position.x = 3.0;
  marker9.pose.position.y = 0.0;
  marker9.pose.position.z = 1.6;
  marker9.pose.orientation.x = 0.0;
  marker9.pose.orientation.y = 0.0;
  marker9.pose.orientation.z = 0.0;
  marker9.pose.orientation.w = 1.0;
  marker9.scale.x = 0.2;
  marker9.scale.y = 0.2;
  marker9.scale.z = 1.2;
  marker9.color.a = 1.0; // Don't forget to set the alpha!
  marker9.color.r = 0.5;
  marker9.color.g = 0.5;
  marker9.color.b = 0.5;
  visual_pub.publish(marker9);
  
  //final ball and cylinder
  visualization_msgs::Marker marker0;
  marker0.header.frame_id = "test";
  marker0.header.stamp = ros::Time();
  marker0.ns = "my_namespace";
  marker0.id = 9;
  marker0.type = visualization_msgs::Marker::SPHERE;
  marker0.action = visualization_msgs::Marker::ADD;
  marker0.pose.position.x = 0.3;
  marker0.pose.position.y = 0;
  marker0.pose.position.z = 2.2;
  marker0.pose.orientation.x = 0.0;
  marker0.pose.orientation.y = 0.0;
  marker0.pose.orientation.z = 0.0;
  marker0.pose.orientation.w = 1.0;
  marker0.scale.x = 0.5;
  marker0.scale.y = 0.5;
  marker0.scale.z = 0.5;
  marker0.color.a = 1.0; // Don't forget to set the alpha!
  marker0.color.r = 0.9;
  marker0.color.g = 0.9;
  marker0.color.b = 0.9;
  visual_pub.publish(marker0);
  
  visualization_msgs::Marker marker11;
  marker11.header.frame_id = "test";
  marker11.header.stamp = ros::Time();
  marker11.ns = "my_namespace";
  marker11.id = 10;
  marker11.type = visualization_msgs::Marker::CYLINDER;
  marker11.action = visualization_msgs::Marker::ADD;
  marker11.pose.position.x = 0.4;
  marker11.pose.position.y = 0.0;
  marker11.pose.position.z = 1.6;
  marker11.pose.orientation.x = 0.0;
  marker11.pose.orientation.y = -0.1;
  marker11.pose.orientation.z = 0.0;
  marker11.pose.orientation.w = 1.1;
  marker11.scale.x = 0.2;
  marker11.scale.y = 0.2;
  marker11.scale.z = 1.2;
  marker11.color.a = 1.0; // Don't forget to set the alpha!
  marker11.color.r = 0.5;
  marker11.color.g = 0.5;
  marker11.color.b = 0.5;
  visual_pub.publish(marker11);
  
  ROS_INFO("maker established!");


}