// Generated by gencpp from file franka_control/SetCartesianImpedance.msg
// DO NOT EDIT!


#ifndef FRANKA_CONTROL_MESSAGE_SETCARTESIANIMPEDANCE_H
#define FRANKA_CONTROL_MESSAGE_SETCARTESIANIMPEDANCE_H

#include <ros/service_traits.h>


#include <franka_control/SetCartesianImpedanceRequest.h>
#include <franka_control/SetCartesianImpedanceResponse.h>


namespace franka_control
{

struct SetCartesianImpedance
{

typedef SetCartesianImpedanceRequest Request;
typedef SetCartesianImpedanceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetCartesianImpedance
} // namespace franka_control


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::franka_control::SetCartesianImpedance > {
  static const char* value()
  {
    return "c648a0b1340a53eac0c535568e9b5c60";
  }

  static const char* value(const ::franka_control::SetCartesianImpedance&) { return value(); }
};

template<>
struct DataType< ::franka_control::SetCartesianImpedance > {
  static const char* value()
  {
    return "franka_control/SetCartesianImpedance";
  }

  static const char* value(const ::franka_control::SetCartesianImpedance&) { return value(); }
};


// service_traits::MD5Sum< ::franka_control::SetCartesianImpedanceRequest> should match
// service_traits::MD5Sum< ::franka_control::SetCartesianImpedance >
template<>
struct MD5Sum< ::franka_control::SetCartesianImpedanceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::franka_control::SetCartesianImpedance >::value();
  }
  static const char* value(const ::franka_control::SetCartesianImpedanceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::franka_control::SetCartesianImpedanceRequest> should match
// service_traits::DataType< ::franka_control::SetCartesianImpedance >
template<>
struct DataType< ::franka_control::SetCartesianImpedanceRequest>
{
  static const char* value()
  {
    return DataType< ::franka_control::SetCartesianImpedance >::value();
  }
  static const char* value(const ::franka_control::SetCartesianImpedanceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::franka_control::SetCartesianImpedanceResponse> should match
// service_traits::MD5Sum< ::franka_control::SetCartesianImpedance >
template<>
struct MD5Sum< ::franka_control::SetCartesianImpedanceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::franka_control::SetCartesianImpedance >::value();
  }
  static const char* value(const ::franka_control::SetCartesianImpedanceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::franka_control::SetCartesianImpedanceResponse> should match
// service_traits::DataType< ::franka_control::SetCartesianImpedance >
template<>
struct DataType< ::franka_control::SetCartesianImpedanceResponse>
{
  static const char* value()
  {
    return DataType< ::franka_control::SetCartesianImpedance >::value();
  }
  static const char* value(const ::franka_control::SetCartesianImpedanceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // FRANKA_CONTROL_MESSAGE_SETCARTESIANIMPEDANCE_H
