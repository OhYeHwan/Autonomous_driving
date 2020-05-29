#include "my_pkg/my_msg.h"
#include "ros/ros.h"
#include <iostream>
using namespace std;
 
// static int i = 0;
 
// void clbk(const my_pkg::my_msg::ConstPtr &msg) {
//   ROS_INFO("%d", msg->another_field);
//   ROS_INFO("point : x = %.2f, y = %.2f", msg->points[i].x, msg->points[i].y);
//   i++;
// }
 
// int main(int argc, char **argv) {
//   ros::init(argc, argv, "my_subscriber");
//   ros::NodeHandle n;
//   ros::Subscriber sub = n.subscribe("my_topic", 1, clbk);
 
//   ros::spin();
// }
void clbk(const my_pkg::my_msg::ConstPtr &msg) {
  ROS_INFO("%d", msg->another_field);
  int k = 0;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (msg->obstacle[k] == true)
        cout << " 1 ";
      else
        cout << " 0 ";
      k++;
    }
    cout << endl;
  }
}
 
int main(int argc, char **argv) {
 
  ros::init(argc, argv, "my_subscriber");
  ros::NodeHandle n;
  ros::Subscriber sub = n.subscribe("my_topic", 1, clbk);
 
  ros::spin();
}
