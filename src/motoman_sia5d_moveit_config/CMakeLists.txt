cmake_minimum_required(VERSION 2.8.3)
project(motoman_sia5d_moveit_config)

find_package(catkin REQUIRED
   roscpp
   std_msgs
   geometry_msgs
   moveit_ros_planning_interface
)

catkin_package()

include_directories(
 include
 ${catkin_INCLUDE_DIRS}
)

add_executable(move_triangle src/move_triangle.cpp)

target_link_libraries(move_triangle
  ${catkin_LIBRARIES}
)

install(DIRECTORY launch DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
  PATTERN "setup_assistant.launch" EXCLUDE)
install(DIRECTORY config DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION})
