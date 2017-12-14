## Robotics Technology Exam

### Result
* [![methanol](/src/Ethanol/methanol.png)](/src/Ethanol/methanol.png)
* Sorry for the wrong name, the node I created called `makeethanol`, but actually it's a `Methanol` :) This because I create node before doing it..

### How I solve this probelm
* First, I found this question is familiar to one of the lab doing `point visualizer`. This time, I don't need to read a mouse or keyboard, just publish a `marker` to Rviz.
* Then I prepared my code from point visualizer, and start to learn how to use marker.
* After I use the tutorial code from web, and manage to display it in Rviz. I start to modify the code, and get my Methanol.

### How it works
* Basiclly, I create serveral markers, they have some critical properties like: type, pose.position , pose.orientation, scale, color etc.
* In this task, I just use `SPHERE` and `CYLINDER` for marker type. Position and orientation need to be calculated, then set color and scale.
* Add marker in Rviz and subscribe on the topic I published in the rosnode.
* Create a rosnode that publish the markers messages on the specific topic.

[![nodes](/src/Ethanol/nodes.png)](/src/Ethanol/nodes.png)
