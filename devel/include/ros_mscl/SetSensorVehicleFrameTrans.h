// Generated by gencpp from file ros_mscl/SetSensorVehicleFrameTrans.msg
// DO NOT EDIT!


#ifndef ROS_MSCL_MESSAGE_SETSENSORVEHICLEFRAMETRANS_H
#define ROS_MSCL_MESSAGE_SETSENSORVEHICLEFRAMETRANS_H

#include <ros/service_traits.h>


#include <ros_mscl/SetSensorVehicleFrameTransRequest.h>
#include <ros_mscl/SetSensorVehicleFrameTransResponse.h>


namespace ros_mscl
{

struct SetSensorVehicleFrameTrans
{

typedef SetSensorVehicleFrameTransRequest Request;
typedef SetSensorVehicleFrameTransResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetSensorVehicleFrameTrans
} // namespace ros_mscl


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ros_mscl::SetSensorVehicleFrameTrans > {
  static const char* value()
  {
    return "dae0af6e9e855f125599090c94e6955e";
  }

  static const char* value(const ::ros_mscl::SetSensorVehicleFrameTrans&) { return value(); }
};

template<>
struct DataType< ::ros_mscl::SetSensorVehicleFrameTrans > {
  static const char* value()
  {
    return "ros_mscl/SetSensorVehicleFrameTrans";
  }

  static const char* value(const ::ros_mscl::SetSensorVehicleFrameTrans&) { return value(); }
};


// service_traits::MD5Sum< ::ros_mscl::SetSensorVehicleFrameTransRequest> should match
// service_traits::MD5Sum< ::ros_mscl::SetSensorVehicleFrameTrans >
template<>
struct MD5Sum< ::ros_mscl::SetSensorVehicleFrameTransRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ros_mscl::SetSensorVehicleFrameTrans >::value();
  }
  static const char* value(const ::ros_mscl::SetSensorVehicleFrameTransRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_mscl::SetSensorVehicleFrameTransRequest> should match
// service_traits::DataType< ::ros_mscl::SetSensorVehicleFrameTrans >
template<>
struct DataType< ::ros_mscl::SetSensorVehicleFrameTransRequest>
{
  static const char* value()
  {
    return DataType< ::ros_mscl::SetSensorVehicleFrameTrans >::value();
  }
  static const char* value(const ::ros_mscl::SetSensorVehicleFrameTransRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ros_mscl::SetSensorVehicleFrameTransResponse> should match
// service_traits::MD5Sum< ::ros_mscl::SetSensorVehicleFrameTrans >
template<>
struct MD5Sum< ::ros_mscl::SetSensorVehicleFrameTransResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ros_mscl::SetSensorVehicleFrameTrans >::value();
  }
  static const char* value(const ::ros_mscl::SetSensorVehicleFrameTransResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_mscl::SetSensorVehicleFrameTransResponse> should match
// service_traits::DataType< ::ros_mscl::SetSensorVehicleFrameTrans >
template<>
struct DataType< ::ros_mscl::SetSensorVehicleFrameTransResponse>
{
  static const char* value()
  {
    return DataType< ::ros_mscl::SetSensorVehicleFrameTrans >::value();
  }
  static const char* value(const ::ros_mscl::SetSensorVehicleFrameTransResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROS_MSCL_MESSAGE_SETSENSORVEHICLEFRAMETRANS_H