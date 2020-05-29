#include "ros/ros.h"
#include "sensor_msgs/Imu.h"

void msgCallback(const sensor_msgs::Imu::ConstPtr& imu){

	ROS_INFO("Quaternion Orientation : [%f, %f, %f, %f]", imu->orientation.x, imu->orientation.y, imu->orientation.z, imu->orientation.w);
	ROS_INFO("Angular Velocity : [%f, %f, %f]", imu->angular_velocity.x, imu->angular_velocity.y, imu->angular_velocity.z);
	ROS_INFO("Linear Acceleration : [%f, %f, %f]", imu->linear_acceleration.x, imu->linear_acceleration.y, imu->linear_acceleration.z);

}

int main(int argc, char** argv){

	ros::init(argc, argv, "imu_subscriber");

	ros::NodeHandle nh;

	ros::Subscriber sub = nh.subscribe("/gx5/imu/data", 3, msgCallback);


	ros::spin();

	return 0;


}