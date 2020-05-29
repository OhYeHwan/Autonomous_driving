// Generated by gencpp from file ros_mscl/SetMagAdaptiveValsRequest.msg
// DO NOT EDIT!


#ifndef ROS_MSCL_MESSAGE_SETMAGADAPTIVEVALSREQUEST_H
#define ROS_MSCL_MESSAGE_SETMAGADAPTIVEVALSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_mscl
{
template <class ContainerAllocator>
struct SetMagAdaptiveValsRequest_
{
  typedef SetMagAdaptiveValsRequest_<ContainerAllocator> Type;

  SetMagAdaptiveValsRequest_()
    : enable(0.0)
    , low_pass_cutoff(0.0)
    , min_1sigma(0.0)
    , low_limit(0.0)
    , high_limit(0.0)
    , low_limit_1sigma(0.0)
    , high_limit_1sigma(0.0)  {
    }
  SetMagAdaptiveValsRequest_(const ContainerAllocator& _alloc)
    : enable(0.0)
    , low_pass_cutoff(0.0)
    , min_1sigma(0.0)
    , low_limit(0.0)
    , high_limit(0.0)
    , low_limit_1sigma(0.0)
    , high_limit_1sigma(0.0)  {
  (void)_alloc;
    }



   typedef float _enable_type;
  _enable_type enable;

   typedef float _low_pass_cutoff_type;
  _low_pass_cutoff_type low_pass_cutoff;

   typedef float _min_1sigma_type;
  _min_1sigma_type min_1sigma;

   typedef float _low_limit_type;
  _low_limit_type low_limit;

   typedef float _high_limit_type;
  _high_limit_type high_limit;

   typedef float _low_limit_1sigma_type;
  _low_limit_1sigma_type low_limit_1sigma;

   typedef float _high_limit_1sigma_type;
  _high_limit_1sigma_type high_limit_1sigma;





  typedef boost::shared_ptr< ::ros_mscl::SetMagAdaptiveValsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_mscl::SetMagAdaptiveValsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetMagAdaptiveValsRequest_

typedef ::ros_mscl::SetMagAdaptiveValsRequest_<std::allocator<void> > SetMagAdaptiveValsRequest;

typedef boost::shared_ptr< ::ros_mscl::SetMagAdaptiveValsRequest > SetMagAdaptiveValsRequestPtr;
typedef boost::shared_ptr< ::ros_mscl::SetMagAdaptiveValsRequest const> SetMagAdaptiveValsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_mscl::SetMagAdaptiveValsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_mscl::SetMagAdaptiveValsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ros_mscl::SetMagAdaptiveValsRequest_<ContainerAllocator1> & lhs, const ::ros_mscl::SetMagAdaptiveValsRequest_<ContainerAllocator2> & rhs)
{
  return lhs.enable == rhs.enable &&
    lhs.low_pass_cutoff == rhs.low_pass_cutoff &&
    lhs.min_1sigma == rhs.min_1sigma &&
    lhs.low_limit == rhs.low_limit &&
    lhs.high_limit == rhs.high_limit &&
    lhs.low_limit_1sigma == rhs.low_limit_1sigma &&
    lhs.high_limit_1sigma == rhs.high_limit_1sigma;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ros_mscl::SetMagAdaptiveValsRequest_<ContainerAllocator1> & lhs, const ::ros_mscl::SetMagAdaptiveValsRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ros_mscl

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ros_mscl::SetMagAdaptiveValsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_mscl::SetMagAdaptiveValsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_mscl::SetMagAdaptiveValsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_mscl::SetMagAdaptiveValsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_mscl::SetMagAdaptiveValsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_mscl::SetMagAdaptiveValsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_mscl::SetMagAdaptiveValsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ea0a038591e6f2c00f93fee5561157dc";
  }

  static const char* value(const ::ros_mscl::SetMagAdaptiveValsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xea0a038591e6f2c0ULL;
  static const uint64_t static_value2 = 0x0f93fee5561157dcULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_mscl::SetMagAdaptiveValsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_mscl/SetMagAdaptiveValsRequest";
  }

  static const char* value(const ::ros_mscl::SetMagAdaptiveValsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_mscl::SetMagAdaptiveValsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 enable\n"
"float32 low_pass_cutoff\n"
"float32 min_1sigma\n"
"float32 low_limit\n"
"float32 high_limit\n"
"float32 low_limit_1sigma\n"
"float32 high_limit_1sigma\n"
;
  }

  static const char* value(const ::ros_mscl::SetMagAdaptiveValsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_mscl::SetMagAdaptiveValsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.enable);
      stream.next(m.low_pass_cutoff);
      stream.next(m.min_1sigma);
      stream.next(m.low_limit);
      stream.next(m.high_limit);
      stream.next(m.low_limit_1sigma);
      stream.next(m.high_limit_1sigma);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetMagAdaptiveValsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_mscl::SetMagAdaptiveValsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_mscl::SetMagAdaptiveValsRequest_<ContainerAllocator>& v)
  {
    s << indent << "enable: ";
    Printer<float>::stream(s, indent + "  ", v.enable);
    s << indent << "low_pass_cutoff: ";
    Printer<float>::stream(s, indent + "  ", v.low_pass_cutoff);
    s << indent << "min_1sigma: ";
    Printer<float>::stream(s, indent + "  ", v.min_1sigma);
    s << indent << "low_limit: ";
    Printer<float>::stream(s, indent + "  ", v.low_limit);
    s << indent << "high_limit: ";
    Printer<float>::stream(s, indent + "  ", v.high_limit);
    s << indent << "low_limit_1sigma: ";
    Printer<float>::stream(s, indent + "  ", v.low_limit_1sigma);
    s << indent << "high_limit_1sigma: ";
    Printer<float>::stream(s, indent + "  ", v.high_limit_1sigma);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_MSCL_MESSAGE_SETMAGADAPTIVEVALSREQUEST_H
