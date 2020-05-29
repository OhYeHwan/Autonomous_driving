#include <ros/ros.h>
// PCL specific includes
#include <sensor_msgs/PointCloud2.h>
#include <pcl_conversions/pcl_conversions.h> // downsampling
#include <pcl/filters/passthrough.h> // segmentation
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl/filters/voxel_grid.h>
#include <iostream>
//A* Algorithm
#include <iomanip>
#include <queue>
#include <string>
#include <math.h>
#include <cstdlib>
#include <ctime>
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

void Dilation(int input_map[200][200],int b[200][200]){

  for(int i=1;i<200;i++){
    for(int j=1;j<200;j++){
      if(input_map[i][j] == 0) b[i][j] = input_map[i][j];
      if(input_map[i][j] == 1){
        b[i-1][j-1] = 1; b[i-1][j] = 1; b[i-1][j+1] = 1;
        b[i][j-1] = 1;   b[i][j] = 1;   b[i][j+1] = 1;
        b[i+1][j-1] = 1; b[i+1][j] = 1; b[i+1][j+1] = 1;
      }
    }
  }

}


//############################################################################################
//############################################################################################
//############################################################################################
// [[A* algorithm]]
const int n=200; // horizontal size of the map
const int m=200; // vertical size size of the map
static int mapB[n][m]; // map --> mapB
static int closed_nodes_map[n][m]; // map of closed (tried-out) nodes
static int open_nodes_map[n][m]; // map of open (not-yet-tried) nodes
static int dir_map[n][m]; // map of directions
const int dir=8; // number of possible directions to go at any position
// if dir==4
//static int dx[dir]={1, 0, -1, 0};
//static int dy[dir]={0, 1, 0, -1};
// if dir==8
static int dx[dir]={1, 1, 0, -1, -1, -1, 0, 1};
static int dy[dir]={0, 1, 1, 1, 0, -1, -1, -1};
 
class node
{
    // current position
    int xPos;
    int yPos;
    // total distance already travelled to reach the node
    int level;
    // priority=level+remaining distance estimate
    int priority;  // smaller: higher priority
 
    public:
        node(int xp, int yp, int d, int p)
            {xPos=xp; yPos=yp; level=d; priority=p;}
    
        int getxPos() const {return xPos;}
        int getyPos() const {return yPos;}
        int getLevel() const {return level;}
        int getPriority() const {return priority;}
 
        void updatePriority(const int & xDest, const int & yDest)
        {
             priority=level+estimate(xDest, yDest)*10; //A*
        }
 
        // give better priority to going strait instead of diagonally
        void nextLevel(const int & i) // i: direction
        {
             level+=(dir==8?(i%2==0?10:14):10);
        }
        
        // Estimation function for the remaining distance to the goal.
        const int & estimate(const int & xDest, const int & yDest) const
        {
            static int xd, yd, d;
            xd=xDest-xPos;
            yd=yDest-yPos;
 
            // Euclidian Distance
            d=static_cast<int>(sqrt(xd*xd+yd*yd));
 
            // Manhattan distance
            //d=abs(xd)+abs(yd);
            
            // Chebyshev distance
            //d=max(abs(xd), abs(yd));
 
            return(d);
        }
};
 
// Determine priority (in the priority queue)
bool operator<(const node & a, const node & b)
{
  return a.getPriority() > b.getPriority();
}
 
// A-star algorithm.
// The route returned is a string of direction digits.
string pathFind( const int & xStart, const int & yStart,
                 const int & xFinish, const int & yFinish )
{
    static priority_queue<node> pq[2]; // list of open (not-yet-tried) nodes
    static int pqi; // pq index
    static node* n0;
    static node* m0;
    static int i, j, x, y, xdx, ydy;
    static char c;
    pqi=0;
 
    // reset the node maps
    for(y=0;y<m;y++)
    {
        for(x=0;x<n;x++)
        {
            closed_nodes_map[x][y]=0;
            open_nodes_map[x][y]=0;
        }
    }
 
    // create the start node and push into list of open nodes
    n0=new node(xStart, yStart, 0, 0);
    n0->updatePriority(xFinish, yFinish);
    pq[pqi].push(*n0);
    open_nodes_map[x][y]=n0->getPriority(); // mark it on the open nodes map
 
    // A* search
    while(!pq[pqi].empty())
    {
        // get the current node w/ the highest priority
        // from the list of open nodes
        n0=new node( pq[pqi].top().getxPos(), pq[pqi].top().getyPos(),
                     pq[pqi].top().getLevel(), pq[pqi].top().getPriority());
 
        x=n0->getxPos(); y=n0->getyPos();
 
        pq[pqi].pop(); // remove the node from the open list
        open_nodes_map[x][y]=0;
        // mark it on the closed nodes map
        closed_nodes_map[x][y]=1;
 
        // quit searching when the goal state is reached
        //if((*n0).estimate(xFinish, yFinish) == 0)
        if(x==xFinish && y==yFinish)
        {
            // generate the path from finish to start
            // by following the directions
            string path="";
            while(!(x==xStart && y==yStart))
            {
                j=dir_map[x][y];
                c='0'+(j+dir/2)%dir;
                path=c+path;
                x+=dx[j];
                y+=dy[j];
            }
 
            // garbage collection
            delete n0;
            // empty the leftover nodes
            while(!pq[pqi].empty()) pq[pqi].pop();
            return path;
        }
 
        // generate moves (child nodes) in all possible directions
        for(i=0;i<dir;i++)
        {
            xdx=x+dx[i]; ydy=y+dy[i];
 
            if(!(xdx<0 || xdx>n-1 || ydy<0 || ydy>m-1 || mapB[xdx][ydy]==1
                || closed_nodes_map[xdx][ydy]==1))// map --> mapB modify
            {
                // generate a child node
                m0=new node( xdx, ydy, n0->getLevel(),
                             n0->getPriority());
                m0->nextLevel(i);
                m0->updatePriority(xFinish, yFinish);
 
                // if it is not in the open list then add into that
                if(open_nodes_map[xdx][ydy]==0)
                {
                    open_nodes_map[xdx][ydy]=m0->getPriority();
                    pq[pqi].push(*m0);
                    // mark its parent node direction
                    dir_map[xdx][ydy]=(i+dir/2)%dir;
                }
                else if(open_nodes_map[xdx][ydy]>m0->getPriority())
                {
                    // update the priority info
                    open_nodes_map[xdx][ydy]=m0->getPriority();
                    // update the parent direction info
                    dir_map[xdx][ydy]=(i+dir/2)%dir;
 
                    // replace the node
                    // by emptying one pq to the other one
                    // except the node to be replaced will be ignored
                    // and the new node will be pushed in instead
                    while(!(pq[pqi].top().getxPos()==xdx &&
                           pq[pqi].top().getyPos()==ydy))
                    {
                        pq[1-pqi].push(pq[pqi].top());
                        pq[pqi].pop();
                    }
                    pq[pqi].pop(); // remove the wanted node
                    
                    // empty the larger size pq to the smaller one
                    if(pq[pqi].size()>pq[1-pqi].size()) pqi=1-pqi;
                    while(!pq[pqi].empty())
                    {
                        pq[1-pqi].push(pq[pqi].top());
                        pq[pqi].pop();
                    }
                    pqi=1-pqi;
                    pq[pqi].push(*m0); // add the better node instead
                }
                else delete m0; // garbage collection
            }
        }
        delete n0; // garbage collection
    }
    return ""; // no route found
}
//############################################################################################
//############################################################################################
//############################################################################################

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


  pcl::PCLPointCloud2* ptr_cloud_z = new pcl::PCLPointCloud2;
  *ptr_cloud_z = cloud_filtered;
  pcl::PCLPointCloud2ConstPtr cloudPtr2(ptr_cloud_z);
  pcl::PCLPointCloud2 cloud_filtered_z;
  
  pcl::PassThrough<pcl::PCLPointCloud2> pass;
  pass.setInputCloud(cloudPtr2);
  pass.setFilterFieldName("z"); // axis
  pass.setFilterLimits(-1.0, 1.0); // -1m ~ 1m
  pass.filter(cloud_filtered_z);

  pcl::PCLPointCloud2* ptr_cloud_y = new pcl::PCLPointCloud2;
  *ptr_cloud_y = cloud_filtered_z;
  pcl::PCLPointCloud2ConstPtr cloudPtr3(ptr_cloud_y);
  pcl::PCLPointCloud2 cloud_filtered_y;
  
  pcl::PassThrough<pcl::PCLPointCloud2> pass1;
  pass1.setInputCloud(cloudPtr3);
  pass1.setFilterFieldName("y"); // axis
  pass1.setFilterLimits(-9.0, 9.0); // -10m ~ 10m
  pass1.filter(cloud_filtered_y);

  pcl::PCLPointCloud2* ptr_cloud_x = new pcl::PCLPointCloud2;
  *ptr_cloud_x = cloud_filtered_y;
  pcl::PCLPointCloud2ConstPtr cloudPtr4(ptr_cloud_x);
  pcl::PCLPointCloud2 cloud_filtered_x;
  
  pcl::PassThrough<pcl::PCLPointCloud2> pass2;
  pass2.setInputCloud(cloudPtr4);
  pass2.setFilterFieldName("x"); // axis
  pass2.setFilterLimits(-9.0, 9.0); // -10m ~ 10m
  pass2.filter(cloud_filtered_x);


  // Convert to ROS data type
  sensor_msgs::PointCloud2 output;
  pcl_conversions::fromPCL(cloud_filtered_x, output);



  int mapA[200][200] = {0};
  

  pcl::PointCloud<pcl::PointXYZ> point_xyz;
  point_xyz = cloudmsg2cloud(output);

  for(int i=0;i<point_xyz.size();i++){



    float x = point_xyz.points[i].x;
    float y = point_xyz.points[i].y;
 
    x = x + 10;
    y = y + 10;

    mapA[int(x*10)][int(y*10)] = 1;

  }

  Dilation(mapA, mapB);

  int xA = 100, yA = 100, xB = 150, yB = 100;
  string route = pathFind(xA, yA, xB, yB);

  if(route=="") cout<<"An empty route generated!"<<endl;
  cout<<"Route:"<<endl;
  cout<<route<<endl<<endl;
 
    // follow the route on the map and display it
  if(route.length()>0)
  {
    int j; char c;
    int x=xA;
    int y=yA;
    mapB[x][y]=2;
    for(int i=0;i<route.length();i++)
    {
        c =route.at(i);
        j=atoi(&c);
        x=x+dx[j];
        y=y+dy[j];
        mapB[x][y]=3;
    }
    mapB[x][y]=4;
    
    // display the map with the route
    for(int x=199;x>=0;x--)
        {
          for(int y=199;y>=0;y--)
            if(mapB[x][y]==0)
              cout<<".";
            else if(mapB[x][y]==1)
              cout<<"1"; //obstacle
            else if(mapB[x][y]==2)
              cout<<"S"; //start
            else if(mapB[x][y]==3)
              cout<<"R"; //route
            else if(mapB[x][y]==4)
              cout<<"F"; //finish
            cout<<endl;
        }
    }

  cout << endl;
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