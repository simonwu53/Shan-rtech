  geometry_msgs::Pose start_pose2;
  start_pose2.orientation.w = 1.0;
  start_pose2.position.x = 0.55;
  start_pose2.position.y = -0.05;
  start_pose2.position.z = 0.8;
  // Cartesian Paths
  // ^^^^^^^^^^^^^^^
  // You can plan a cartesian path directly by specifying a list of waypoints 
  // for the end-effector to go through. Note that we are starting 
  // from the new start state above.  The initial pose (start state) does not
  // need to be added to the waypoint list.
  std::vector<geometry_msgs::Pose> waypoints;

  geometry_msgs::Pose target_pose3 = start_pose2;
  target_pose3.position.x -= 0.2;
  //target_pose3.position.z += 0.2;
  waypoints.push_back(target_pose3);  // up and out

  //target_pose3.position.y -= 0.2;
  //waypoints.push_back(target_pose3);  // left

  //target_pose3.position.z -= 0.2;
  //.position.y += 0.2;
  //target_pose3.position.x -= 0.2;
  //waypoints.push_back(target_pose3);  // down and right (back to start)

  // We want the cartesian path to be interpolated at a resolution of 1 cm
  // which is why we will specify 0.01 as the max step in cartesian
  // translation.  We will specify the jump threshold as 0.0, effectively
  // disabling it.
  moveit_msgs::RobotTrajectory trajectory;
  double fraction = group.computeCartesianPath(waypoints,
                                               0.001,  // eef_step
                                               0.0,   // jump_threshold
                                               trajectory);

  ROS_INFO("Visualizing plan 4 (cartesian path) (%.2f%% acheived)",
        fraction * 100.0);    
  /* Sleep to give Rviz time to visualize the plan. */
  sleep(15.0);
  
  
  
  
  
  
  // Planning to a Pose goal
  geometry_msgs::Pose target_pose1;
  target_pose1.orientation.w = 1.0;
  target_pose1.position.x = 0.5;
  target_pose1.position.y = 0;
  target_pose1.position.z = 0.64;
  group.setPoseTarget(target_pose1);
  // Now, we call the planner to compute the plan
  // and visualize it.
  // Note that we are just planning, not asking move_group 
  // to actually move the robot.
  moveit::planning_interface::MoveGroup::Plan my_plan;
  bool success = group.plan(my_plan);

  ROS_INFO("Visualizing plan 1 (pose goal) %s",success?"":"FAILED");    
  /* Sleep to give Rviz time to visualize the plan. */
  sleep(5.0);
  // END for this pose
    
  // Planning to a Pose goal 2
  geometry_msgs::Pose target_pose2;
  target_pose2.orientation.w = 1.0;
  target_pose2.position.x = 0.5;
  target_pose2.position.y = 0;
  target_pose2.position.z = 0.64;
  group.setPoseTarget(target_pose2);
  // Now, we call the planner to compute the plan
  // and visualize it.
  // Note that we are just planning, not asking move_group 
  // to actually move the robot.
  moveit::planning_interface::MoveGroup::Plan my_plan2;
  bool success2 = group.plan(my_plan2);

  ROS_INFO("Visualizing plan 1 (pose goal) %s",success?"":"FAILED");    
  /* Sleep to give Rviz time to visualize the plan. */
  sleep(5.0);
  // END for this pose
  
  
  // Planning to a Pose goal 3
  geometry_msgs::Pose target_pose3;
  target_pose3.orientation.w = 1.0;
  target_pose3.position.x = 0.5;
  target_pose3.position.y = 0;
  target_pose3.position.z = 0.64;
  group.setPoseTarget(target_pose3);
  // Now, we call the planner to compute the plan
  // and visualize it.
  // Note that we are just planning, not asking move_group 
  // to actually move the robot.
  moveit::planning_interface::MoveGroup::Plan my_plan3;
  bool success3 = group.plan(my_plan3);

  ROS_INFO("Visualizing plan 1 (pose goal) %s",success?"":"FAILED");    
  /* Sleep to give Rviz time to visualize the plan. */
  sleep(5.0);
  // END for this pose