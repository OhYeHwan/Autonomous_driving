// Generated by gencpp from file ros_mscl/status_msg.msg
// DO NOT EDIT!


#ifndef ROS_MSCL_MESSAGE_STATUS_MSG_H
#define ROS_MSCL_MESSAGE_STATUS_MSG_H


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
struct status_msg_
{
  typedef status_msg_<ContainerAllocator> Type;

  status_msg_()
    : device_model(0)
    , status_selector(0)
    , status_flags(0)
    , system_state(0)
    , system_timer_ms(0)
    , gps_power_on(0)
    , num_gps_pps_triggers(0)
    , last_gps_pps_trigger_ms(0)
    , imu_stream_enabled(0)
    , gps_stream_enabled(0)
    , filter_stream_enabled(0)
    , imu_dropped_packets(0)
    , gps_dropped_packets(0)
    , filter_dropped_packets(0)
    , com1_port_bytes_written(0)
    , com1_port_bytes_read(0)
    , com1_port_write_overruns(0)
    , com1_port_read_overruns(0)
    , imu_parser_errors(0)
    , imu_message_count(0)
    , imu_last_message_ms(0)
    , gps_parser_errors(0)
    , gps_message_count(0)
    , gps_last_message_ms(0)  {
    }
  status_msg_(const ContainerAllocator& _alloc)
    : device_model(0)
    , status_selector(0)
    , status_flags(0)
    , system_state(0)
    , system_timer_ms(0)
    , gps_power_on(0)
    , num_gps_pps_triggers(0)
    , last_gps_pps_trigger_ms(0)
    , imu_stream_enabled(0)
    , gps_stream_enabled(0)
    , filter_stream_enabled(0)
    , imu_dropped_packets(0)
    , gps_dropped_packets(0)
    , filter_dropped_packets(0)
    , com1_port_bytes_written(0)
    , com1_port_bytes_read(0)
    , com1_port_write_overruns(0)
    , com1_port_read_overruns(0)
    , imu_parser_errors(0)
    , imu_message_count(0)
    , imu_last_message_ms(0)
    , gps_parser_errors(0)
    , gps_message_count(0)
    , gps_last_message_ms(0)  {
  (void)_alloc;
    }



   typedef uint16_t _device_model_type;
  _device_model_type device_model;

   typedef uint8_t _status_selector_type;
  _status_selector_type status_selector;

   typedef uint32_t _status_flags_type;
  _status_flags_type status_flags;

   typedef uint16_t _system_state_type;
  _system_state_type system_state;

   typedef uint32_t _system_timer_ms_type;
  _system_timer_ms_type system_timer_ms;

   typedef uint8_t _gps_power_on_type;
  _gps_power_on_type gps_power_on;

   typedef uint32_t _num_gps_pps_triggers_type;
  _num_gps_pps_triggers_type num_gps_pps_triggers;

   typedef uint32_t _last_gps_pps_trigger_ms_type;
  _last_gps_pps_trigger_ms_type last_gps_pps_trigger_ms;

   typedef uint8_t _imu_stream_enabled_type;
  _imu_stream_enabled_type imu_stream_enabled;

   typedef uint8_t _gps_stream_enabled_type;
  _gps_stream_enabled_type gps_stream_enabled;

   typedef uint8_t _filter_stream_enabled_type;
  _filter_stream_enabled_type filter_stream_enabled;

   typedef uint32_t _imu_dropped_packets_type;
  _imu_dropped_packets_type imu_dropped_packets;

   typedef uint32_t _gps_dropped_packets_type;
  _gps_dropped_packets_type gps_dropped_packets;

   typedef uint32_t _filter_dropped_packets_type;
  _filter_dropped_packets_type filter_dropped_packets;

   typedef uint32_t _com1_port_bytes_written_type;
  _com1_port_bytes_written_type com1_port_bytes_written;

   typedef uint32_t _com1_port_bytes_read_type;
  _com1_port_bytes_read_type com1_port_bytes_read;

   typedef uint32_t _com1_port_write_overruns_type;
  _com1_port_write_overruns_type com1_port_write_overruns;

   typedef uint32_t _com1_port_read_overruns_type;
  _com1_port_read_overruns_type com1_port_read_overruns;

   typedef uint32_t _imu_parser_errors_type;
  _imu_parser_errors_type imu_parser_errors;

   typedef uint32_t _imu_message_count_type;
  _imu_message_count_type imu_message_count;

   typedef uint32_t _imu_last_message_ms_type;
  _imu_last_message_ms_type imu_last_message_ms;

   typedef uint32_t _gps_parser_errors_type;
  _gps_parser_errors_type gps_parser_errors;

   typedef uint32_t _gps_message_count_type;
  _gps_message_count_type gps_message_count;

   typedef uint32_t _gps_last_message_ms_type;
  _gps_last_message_ms_type gps_last_message_ms;





  typedef boost::shared_ptr< ::ros_mscl::status_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_mscl::status_msg_<ContainerAllocator> const> ConstPtr;

}; // struct status_msg_

typedef ::ros_mscl::status_msg_<std::allocator<void> > status_msg;

typedef boost::shared_ptr< ::ros_mscl::status_msg > status_msgPtr;
typedef boost::shared_ptr< ::ros_mscl::status_msg const> status_msgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_mscl::status_msg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_mscl::status_msg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ros_mscl::status_msg_<ContainerAllocator1> & lhs, const ::ros_mscl::status_msg_<ContainerAllocator2> & rhs)
{
  return lhs.device_model == rhs.device_model &&
    lhs.status_selector == rhs.status_selector &&
    lhs.status_flags == rhs.status_flags &&
    lhs.system_state == rhs.system_state &&
    lhs.system_timer_ms == rhs.system_timer_ms &&
    lhs.gps_power_on == rhs.gps_power_on &&
    lhs.num_gps_pps_triggers == rhs.num_gps_pps_triggers &&
    lhs.last_gps_pps_trigger_ms == rhs.last_gps_pps_trigger_ms &&
    lhs.imu_stream_enabled == rhs.imu_stream_enabled &&
    lhs.gps_stream_enabled == rhs.gps_stream_enabled &&
    lhs.filter_stream_enabled == rhs.filter_stream_enabled &&
    lhs.imu_dropped_packets == rhs.imu_dropped_packets &&
    lhs.gps_dropped_packets == rhs.gps_dropped_packets &&
    lhs.filter_dropped_packets == rhs.filter_dropped_packets &&
    lhs.com1_port_bytes_written == rhs.com1_port_bytes_written &&
    lhs.com1_port_bytes_read == rhs.com1_port_bytes_read &&
    lhs.com1_port_write_overruns == rhs.com1_port_write_overruns &&
    lhs.com1_port_read_overruns == rhs.com1_port_read_overruns &&
    lhs.imu_parser_errors == rhs.imu_parser_errors &&
    lhs.imu_message_count == rhs.imu_message_count &&
    lhs.imu_last_message_ms == rhs.imu_last_message_ms &&
    lhs.gps_parser_errors == rhs.gps_parser_errors &&
    lhs.gps_message_count == rhs.gps_message_count &&
    lhs.gps_last_message_ms == rhs.gps_last_message_ms;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ros_mscl::status_msg_<ContainerAllocator1> & lhs, const ::ros_mscl::status_msg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ros_mscl

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ros_mscl::status_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_mscl::status_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_mscl::status_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_mscl::status_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_mscl::status_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_mscl::status_msg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_mscl::status_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b19b8bec6f96c609664c27dbc51ddf60";
  }

  static const char* value(const ::ros_mscl::status_msg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb19b8bec6f96c609ULL;
  static const uint64_t static_value2 = 0x664c27dbc51ddf60ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_mscl::status_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_mscl/status_msg";
  }

  static const char* value(const ::ros_mscl::status_msg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_mscl::status_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint16 device_model\n"
"uint8  status_selector\n"
"\n"
"uint32 status_flags\n"
"\n"
"uint16 system_state\n"
"uint32 system_timer_ms\n"
"\n"
"uint8 gps_power_on\n"
"\n"
"uint32 num_gps_pps_triggers\n"
"uint32 last_gps_pps_trigger_ms\n"
"\n"
"uint8 imu_stream_enabled\n"
"uint8 gps_stream_enabled\n"
"uint8 filter_stream_enabled\n"
"\n"
"uint32 imu_dropped_packets\n"
"uint32 gps_dropped_packets\n"
"uint32 filter_dropped_packets\n"
"\n"
"uint32 com1_port_bytes_written\n"
"uint32 com1_port_bytes_read\n"
"uint32 com1_port_write_overruns\n"
"uint32 com1_port_read_overruns\n"
"\n"
"uint32 imu_parser_errors\n"
"uint32 imu_message_count\n"
"uint32 imu_last_message_ms\n"
"\n"
"uint32 gps_parser_errors\n"
"uint32 gps_message_count\n"
"uint32 gps_last_message_ms\n"
;
  }

  static const char* value(const ::ros_mscl::status_msg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_mscl::status_msg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.device_model);
      stream.next(m.status_selector);
      stream.next(m.status_flags);
      stream.next(m.system_state);
      stream.next(m.system_timer_ms);
      stream.next(m.gps_power_on);
      stream.next(m.num_gps_pps_triggers);
      stream.next(m.last_gps_pps_trigger_ms);
      stream.next(m.imu_stream_enabled);
      stream.next(m.gps_stream_enabled);
      stream.next(m.filter_stream_enabled);
      stream.next(m.imu_dropped_packets);
      stream.next(m.gps_dropped_packets);
      stream.next(m.filter_dropped_packets);
      stream.next(m.com1_port_bytes_written);
      stream.next(m.com1_port_bytes_read);
      stream.next(m.com1_port_write_overruns);
      stream.next(m.com1_port_read_overruns);
      stream.next(m.imu_parser_errors);
      stream.next(m.imu_message_count);
      stream.next(m.imu_last_message_ms);
      stream.next(m.gps_parser_errors);
      stream.next(m.gps_message_count);
      stream.next(m.gps_last_message_ms);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct status_msg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_mscl::status_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_mscl::status_msg_<ContainerAllocator>& v)
  {
    s << indent << "device_model: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.device_model);
    s << indent << "status_selector: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status_selector);
    s << indent << "status_flags: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.status_flags);
    s << indent << "system_state: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.system_state);
    s << indent << "system_timer_ms: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.system_timer_ms);
    s << indent << "gps_power_on: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gps_power_on);
    s << indent << "num_gps_pps_triggers: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.num_gps_pps_triggers);
    s << indent << "last_gps_pps_trigger_ms: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.last_gps_pps_trigger_ms);
    s << indent << "imu_stream_enabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.imu_stream_enabled);
    s << indent << "gps_stream_enabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gps_stream_enabled);
    s << indent << "filter_stream_enabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.filter_stream_enabled);
    s << indent << "imu_dropped_packets: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.imu_dropped_packets);
    s << indent << "gps_dropped_packets: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.gps_dropped_packets);
    s << indent << "filter_dropped_packets: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.filter_dropped_packets);
    s << indent << "com1_port_bytes_written: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.com1_port_bytes_written);
    s << indent << "com1_port_bytes_read: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.com1_port_bytes_read);
    s << indent << "com1_port_write_overruns: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.com1_port_write_overruns);
    s << indent << "com1_port_read_overruns: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.com1_port_read_overruns);
    s << indent << "imu_parser_errors: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.imu_parser_errors);
    s << indent << "imu_message_count: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.imu_message_count);
    s << indent << "imu_last_message_ms: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.imu_last_message_ms);
    s << indent << "gps_parser_errors: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.gps_parser_errors);
    s << indent << "gps_message_count: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.gps_message_count);
    s << indent << "gps_last_message_ms: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.gps_last_message_ms);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_MSCL_MESSAGE_STATUS_MSG_H
