#include "geometry_msgs/Point.h"
#include "my_pkg/my_msg.h"
#include "ros/ros.h"
#include <cstdlib>
#include <ctime>
 
#include <vector>
 
struct Point {
  float x;
  float y;
  bool o;
};
 
int main(int argc, char **argv) {
  ros::init(argc, argv, "my_publisher");
  ros::NodeHandle n;
  ros::Publisher pub = n.advertise<my_pkg::my_msg>("my_topic", 1);
  ros::Rate loop_rate(0.5);
 
  my_pkg::my_msg msg;
  msg.another_field = 0;
 
  //   Point my_array[11];
  //   Point point;
  //   for (int i = 0; i < 11; i++) {
  //     point.x = i;
  //     point.y = i;
  //     my_array[i] = point;
  //   }
  //   srand((unsigned int)time(NULL));
 
  //   Point my_array[100];
  //   Point point;
  //   int k = 0;
  //   for (int i = 0; i < 10; i++) {
  //     for (int j = 0; j < 10; j++) {
  //       point.x = i;
  //       point.y = j;
  //       if (rand() % 3 == 0)
  //         point.o = true;
  //       else
  //         point.o = false;
  //       my_array[k] = point;
  //       k++;
  //     }
  //   }
  //   std::vector<Point> my_vector(my_array,
  //                                my_array + sizeof(my_array) /
  //                                sizeof(Point));
 
  int count = 0;
  while (ros::ok()) {
 
    srand((unsigned int)time(NULL));
 
    Point my_array[100];
    Point point;
    int k = 0;
    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
        point.x = i;
        point.y = j;
        if (rand() % 3 == 0)
          point.o = true;
        else
          point.o = false;
        my_array[k] = point;
        k++;
      }
    }
    std::vector<Point> my_vector(my_array,
                                 my_array + sizeof(my_array) / sizeof(Point));
 
    msg.points.clear();
    msg.obstacle.clear();
    msg.another_field = count;
    int i = 0;
    for (std::vector<Point>::iterator it = my_vector.begin();
         it != my_vector.end(); it++) {
      geometry_msgs::Point point;
      bool ob;
      point.x = (*it).x;
      point.y = (*it).y;
      point.z = 0;
      ob = (*it).o;
      msg.points.push_back(point);
      msg.obstacle.push_back(ob);
      i++;
    }
 
    ROS_INFO("%d", msg.another_field);
 
    pub.publish(msg);
    ros::spinOnce();
 
    loop_rate.sleep();
    ++count;
  }
}
