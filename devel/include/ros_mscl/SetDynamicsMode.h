// Generated by gencpp from file ros_mscl/SetDynamicsMode.msg
// DO NOT EDIT!


#ifndef ROS_MSCL_MESSAGE_SETDYNAMICSMODE_H
#define ROS_MSCL_MESSAGE_SETDYNAMICSMODE_H

#include <ros/service_traits.h>


#include <ros_mscl/SetDynamicsModeRequest.h>
#include <ros_mscl/SetDynamicsModeResponse.h>


namespace ros_mscl
{

struct SetDynamicsMode
{

typedef SetDynamicsModeRequest Request;
typedef SetDynamicsModeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetDynamicsMode
} // namespace ros_mscl


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ros_mscl::SetDynamicsMode > {
  static const char* value()
  {
    return "44114e5483e212902c0a057defaa1a3b";
  }

  static const char* value(const ::ros_mscl::SetDynamicsMode&) { return value(); }
};

template<>
struct DataType< ::ros_mscl::SetDynamicsMode > {
  static const char* value()
  {
    return "ros_mscl/SetDynamicsMode";
  }

  static const char* value(const ::ros_mscl::SetDynamicsMode&) { return value(); }
};


// service_traits::MD5Sum< ::ros_mscl::SetDynamicsModeRequest> should match
// service_traits::MD5Sum< ::ros_mscl::SetDynamicsMode >
template<>
struct MD5Sum< ::ros_mscl::SetDynamicsModeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ros_mscl::SetDynamicsMode >::value();
  }
  static const char* value(const ::ros_mscl::SetDynamicsModeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_mscl::SetDynamicsModeRequest> should match
// service_traits::DataType< ::ros_mscl::SetDynamicsMode >
template<>
struct DataType< ::ros_mscl::SetDynamicsModeRequest>
{
  static const char* value()
  {
    return DataType< ::ros_mscl::SetDynamicsMode >::value();
  }
  static const char* value(const ::ros_mscl::SetDynamicsModeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ros_mscl::SetDynamicsModeResponse> should match
// service_traits::MD5Sum< ::ros_mscl::SetDynamicsMode >
template<>
struct MD5Sum< ::ros_mscl::SetDynamicsModeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ros_mscl::SetDynamicsMode >::value();
  }
  static const char* value(const ::ros_mscl::SetDynamicsModeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_mscl::SetDynamicsModeResponse> should match
// service_traits::DataType< ::ros_mscl::SetDynamicsMode >
template<>
struct DataType< ::ros_mscl::SetDynamicsModeResponse>
{
  static const char* value()
  {
    return DataType< ::ros_mscl::SetDynamicsMode >::value();
  }
  static const char* value(const ::ros_mscl::SetDynamicsModeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROS_MSCL_MESSAGE_SETDYNAMICSMODE_H
