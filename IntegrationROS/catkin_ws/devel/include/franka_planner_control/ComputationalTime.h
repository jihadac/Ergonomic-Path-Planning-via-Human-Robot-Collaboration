// Generated by gencpp from file franka_planner_control/ComputationalTime.msg
// DO NOT EDIT!


#ifndef FRANKA_PLANNER_CONTROL_MESSAGE_COMPUTATIONALTIME_H
#define FRANKA_PLANNER_CONTROL_MESSAGE_COMPUTATIONALTIME_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace franka_planner_control
{
template <class ContainerAllocator>
struct ComputationalTime_
{
  typedef ComputationalTime_<ContainerAllocator> Type;

  ComputationalTime_()
    : time(0.0)
    , NF(0.0)
    , DSM(0.0)
    , trajectory_predictions(0.0)
    , ERG(0.0)  {
    }
  ComputationalTime_(const ContainerAllocator& _alloc)
    : time(0.0)
    , NF(0.0)
    , DSM(0.0)
    , trajectory_predictions(0.0)
    , ERG(0.0)  {
  (void)_alloc;
    }



   typedef double _time_type;
  _time_type time;

   typedef double _NF_type;
  _NF_type NF;

   typedef double _DSM_type;
  _DSM_type DSM;

   typedef double _trajectory_predictions_type;
  _trajectory_predictions_type trajectory_predictions;

   typedef double _ERG_type;
  _ERG_type ERG;





  typedef boost::shared_ptr< ::franka_planner_control::ComputationalTime_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::franka_planner_control::ComputationalTime_<ContainerAllocator> const> ConstPtr;

}; // struct ComputationalTime_

typedef ::franka_planner_control::ComputationalTime_<std::allocator<void> > ComputationalTime;

typedef boost::shared_ptr< ::franka_planner_control::ComputationalTime > ComputationalTimePtr;
typedef boost::shared_ptr< ::franka_planner_control::ComputationalTime const> ComputationalTimeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::franka_planner_control::ComputationalTime_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::franka_planner_control::ComputationalTime_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::franka_planner_control::ComputationalTime_<ContainerAllocator1> & lhs, const ::franka_planner_control::ComputationalTime_<ContainerAllocator2> & rhs)
{
  return lhs.time == rhs.time &&
    lhs.NF == rhs.NF &&
    lhs.DSM == rhs.DSM &&
    lhs.trajectory_predictions == rhs.trajectory_predictions &&
    lhs.ERG == rhs.ERG;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::franka_planner_control::ComputationalTime_<ContainerAllocator1> & lhs, const ::franka_planner_control::ComputationalTime_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace franka_planner_control

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::franka_planner_control::ComputationalTime_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::franka_planner_control::ComputationalTime_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::franka_planner_control::ComputationalTime_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::franka_planner_control::ComputationalTime_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::franka_planner_control::ComputationalTime_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::franka_planner_control::ComputationalTime_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::franka_planner_control::ComputationalTime_<ContainerAllocator> >
{
  static const char* value()
  {
    return "88eb9a619c00c3079c22019ebb22fa32";
  }

  static const char* value(const ::franka_planner_control::ComputationalTime_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x88eb9a619c00c307ULL;
  static const uint64_t static_value2 = 0x9c22019ebb22fa32ULL;
};

template<class ContainerAllocator>
struct DataType< ::franka_planner_control::ComputationalTime_<ContainerAllocator> >
{
  static const char* value()
  {
    return "franka_planner_control/ComputationalTime";
  }

  static const char* value(const ::franka_planner_control::ComputationalTime_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::franka_planner_control::ComputationalTime_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 time\n"
"float64 NF\n"
"float64 DSM\n"
"float64 trajectory_predictions\n"
"float64 ERG\n"
;
  }

  static const char* value(const ::franka_planner_control::ComputationalTime_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::franka_planner_control::ComputationalTime_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.time);
      stream.next(m.NF);
      stream.next(m.DSM);
      stream.next(m.trajectory_predictions);
      stream.next(m.ERG);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ComputationalTime_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::franka_planner_control::ComputationalTime_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::franka_planner_control::ComputationalTime_<ContainerAllocator>& v)
  {
    s << indent << "time: ";
    Printer<double>::stream(s, indent + "  ", v.time);
    s << indent << "NF: ";
    Printer<double>::stream(s, indent + "  ", v.NF);
    s << indent << "DSM: ";
    Printer<double>::stream(s, indent + "  ", v.DSM);
    s << indent << "trajectory_predictions: ";
    Printer<double>::stream(s, indent + "  ", v.trajectory_predictions);
    s << indent << "ERG: ";
    Printer<double>::stream(s, indent + "  ", v.ERG);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FRANKA_PLANNER_CONTROL_MESSAGE_COMPUTATIONALTIME_H