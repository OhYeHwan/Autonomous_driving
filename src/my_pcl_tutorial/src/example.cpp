#include <ros/ros.h>
// PCL specific includes
#include <sensor_msgs/PointCloud2.h>
#include <pcl_conversions/pcl_conversions.h> // downsampling
#include <pcl/filters/passthrough.h> // segmentation
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl/filters/voxel_grid.h>
#include <iostream>
using namespace std;

ros::Publisher pub;

pcl::PointCloud<pcl::PointXYZ> cloudmsg2cloud(sensor_msgs::PointCloud2 cloudmsg)
{
  pcl::PointCloud<pcl::PointXYZ> cloud_dst;
  pcl::fromROSMsg(cloudmsg, cloud_dst);
  return cloud_dst;
}

sensor_msgs::PointCloud2 cloud2cloudmsg(pcl::PointCloud<pcl::PointXYZ> cloud_src)
{
  sensor_msgs::PointCloud2 cloudmsg;
  pcl::toROSMsg(cloud_src, cloudmsg);
  cloudmsg.header.frame_id = "map";
  return cloudmsg;
}

void 
cloud_cb (const sensor_msgs::PointCloud2ConstPtr& cloud_msg)
{
  // clock_t start = clock(); 
  // Container for original & filtered data
  pcl::PCLPointCloud2* cloud = new pcl::PCLPointCloud2; 
  pcl::PCLPointCloud2ConstPtr cloudPtr(cloud);
  pcl::PCLPointCloud2 cloud_filtered;


  // Convert to PCL data type
  pcl_conversions::toPCL(*cloud_msg, *cloud);

  // Perform the actual filtering
  pcl::VoxelGrid<pcl::PCLPointCloud2> sor;
  sor.setInputCloud (cloudPtr);
  sor.setLeafSize (0.1, 0.1, 0.1);
  sor.filter (cloud_filtered);


  pcl::PCLPointCloud2* ptr_cloud = new pcl::PCLPointCloud2;
  *ptr_cloud = cloud_filtered;
  pcl::PCLPointCloud2ConstPtr cloudPtr2(ptr_cloud);
  pcl::PCLPointCloud2 cloud_filtered2;
  
  pcl::PassThrough<pcl::PCLPointCloud2> pass;
  pass.setInputCloud(cloudPtr2);
  pass.setFilterFieldName("z"); // axis
  pass.setFilterLimits(-1.0, 1.0);
  pass.filter(cloud_filtered2);


  // Convert to ROS data type
  sensor_msgs::PointCloud2 output;
  pcl_conversions::fromPCL(cloud_filtered2, output);




  int map_1[200][200] = {0};
  int map_2[200][200] = {0};
  int map_3[200][200] = {0};
  int map_4[200][200] = {0};
  

  pcl::PointCloud<pcl::PointXYZ> point_xyz;
  point_xyz = cloudmsg2cloud(output);



  for(int i=0;i<point_xyz.size();i++){

    float x = point_xyz.points[i].x;
    float y = point_xyz.points[i].y;

    if(x>=0 && y>=0){
      map_1[int(x*10)][int(y*10)] = 1;
    }else if(x<=0 && y>=0){
      x = -x;
      map_2[int(x*10)][int(y*10)] = 1;
    }else if(x<=0 && y<=0){
      x = -x;
      y = -y;
      map_3[int(x*10)][int(y*10)] = 1;
    }else if(x>=0 && y<=0){
      y = -y;
      map_4[int(x*10)][int(y*10)] = 1;
    }
  }

  

  map_1[0][0] = 4;
  map_2[0][0] = 4;
  map_3[0][0] = 4;
  map_4[0][0] = 4;

  for(int i=99;i>=0;i--){
    for(int j=99;j>=0;j--){
      cout << map_1[i][j] << " ";
    }
    for(int j=0;j<100;j++){
      cout << map_4[i][j] << " ";
    }
    cout << endl;
  }

  for(int i=0;i<100;i++){
    for(int j=99;j>=0;j--){
      cout << map_2[i][j] << " ";
    }
    
    for(int j=0;j<100;j++){
      cout << map_3[i][j] << " ";
    }
    cout << endl;
  }

  cout << endl;

  // clock_t end = clock();
  // double time_elapsed = double(end - start);
  // cout << "Time to calculate (ms): " << time_elapsed << endl;
  // cout << "Time th calculate (s): " << time_elapsed / CLOCKS_PER_SEC << endl;
  // Publish the data

  
  pub.publish (output);
}


int
main (int argc, char** argv)
{
  // Initialize ROS

  ros::init (argc, argv, "my_pcl_tutorial");
  ros::NodeHandle nh;

  // Create a ROS subscriber for the input point cloud

  ros::Subscriber sub = nh.subscribe ("input", 1, cloud_cb);

  // Create a ROS publisher for the output point cloud
  pub = nh.advertise<sensor_msgs::PointCloud2> ("output", 1);


 
  // Spin
  ros::spin ();
}