// Generated by gencpp from file franka_planner_control/JointStates.msg
// DO NOT EDIT!


#ifndef FRANKA_PLANNER_CONTROL_MESSAGE_JOINTSTATES_H
#define FRANKA_PLANNER_CONTROL_MESSAGE_JOINTSTATES_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Pose.h>

namespace franka_planner_control
{
template <class ContainerAllocator>
struct JointStates_
{
  typedef JointStates_<ContainerAllocator> Type;

  JointStates_()
    : time(0.0)
    , xe_r()
    , xe_v()
    , xe()
    , q_r()
    , q_v()
    , q()
    , dotq()
    , tau_commanded()
    , tau_desired_g()
    , tau_desired_full()
    , tau_measured()  {
      q_r.assign(0.0);

      q_v.assign(0.0);

      q.assign(0.0);

      dotq.assign(0.0);

      tau_commanded.assign(0.0);

      tau_desired_g.assign(0.0);

      tau_desired_full.assign(0.0);

      tau_measured.assign(0.0);
  }
  JointStates_(const ContainerAllocator& _alloc)
    : time(0.0)
    , xe_r(_alloc)
    , xe_v(_alloc)
    , xe(_alloc)
    , q_r()
    , q_v()
    , q()
    , dotq()
    , tau_commanded()
    , tau_desired_g()
    , tau_desired_full()
    , tau_measured()  {
  (void)_alloc;
      q_r.assign(0.0);

      q_v.assign(0.0);

      q.assign(0.0);

      dotq.assign(0.0);

      tau_commanded.assign(0.0);

      tau_desired_g.assign(0.0);

      tau_desired_full.assign(0.0);

      tau_measured.assign(0.0);
  }



   typedef double _time_type;
  _time_type time;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _xe_r_type;
  _xe_r_type xe_r;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _xe_v_type;
  _xe_v_type xe_v;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _xe_type;
  _xe_type xe;

   typedef boost::array<double, 7>  _q_r_type;
  _q_r_type q_r;

   typedef boost::array<double, 7>  _q_v_type;
  _q_v_type q_v;

   typedef boost::array<double, 7>  _q_type;
  _q_type q;

   typedef boost::array<double, 7>  _dotq_type;
  _dotq_type dotq;

   typedef boost::array<double, 7>  _tau_commanded_type;
  _tau_commanded_type tau_commanded;

   typedef boost::array<double, 7>  _tau_desired_g_type;
  _tau_desired_g_type tau_desired_g;

   typedef boost::array<double, 7>  _tau_desired_full_type;
  _tau_desired_full_type tau_desired_full;

   typedef boost::array<double, 7>  _tau_measured_type;
  _tau_measured_type tau_measured;





  typedef boost::shared_ptr< ::franka_planner_control::JointStates_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::franka_planner_control::JointStates_<ContainerAllocator> const> ConstPtr;

}; // struct JointStates_

typedef ::franka_planner_control::JointStates_<std::allocator<void> > JointStates;

typedef boost::shared_ptr< ::franka_planner_control::JointStates > JointStatesPtr;
typedef boost::shared_ptr< ::franka_planner_control::JointStates const> JointStatesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::franka_planner_control::JointStates_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::franka_planner_control::JointStates_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::franka_planner_control::JointStates_<ContainerAllocator1> & lhs, const ::franka_planner_control::JointStates_<ContainerAllocator2> & rhs)
{
  return lhs.time == rhs.time &&
    lhs.xe_r == rhs.xe_r &&
    lhs.xe_v == rhs.xe_v &&
    lhs.xe == rhs.xe &&
    lhs.q_r == rhs.q_r &&
    lhs.q_v == rhs.q_v &&
    lhs.q == rhs.q &&
    lhs.dotq == rhs.dotq &&
    lhs.tau_commanded == rhs.tau_commanded &&
    lhs.tau_desired_g == rhs.tau_desired_g &&
    lhs.tau_desired_full == rhs.tau_desired_full &&
    lhs.tau_measured == rhs.tau_measured;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::franka_planner_control::JointStates_<ContainerAllocator1> & lhs, const ::franka_planner_control::JointStates_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace franka_planner_control

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::franka_planner_control::JointStates_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::franka_planner_control::JointStates_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::franka_planner_control::JointStates_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::franka_planner_control::JointStates_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::franka_planner_control::JointStates_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::franka_planner_control::JointStates_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::franka_planner_control::JointStates_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3c8f4ba03149d875ee8618cf39cc73dc";
  }

  static const char* value(const ::franka_planner_control::JointStates_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3c8f4ba03149d875ULL;
  static const uint64_t static_value2 = 0xee8618cf39cc73dcULL;
};

template<class ContainerAllocator>
struct DataType< ::franka_planner_control::JointStates_<ContainerAllocator> >
{
  static const char* value()
  {
    return "franka_planner_control/JointStates";
  }

  static const char* value(const ::franka_planner_control::JointStates_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::franka_planner_control::JointStates_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 time\n"
"geometry_msgs/Pose xe_r\n"
"geometry_msgs/Pose xe_v\n"
"geometry_msgs/Pose xe\n"
"float64[7] q_r\n"
"float64[7] q_v\n"
"float64[7] q\n"
"float64[7] dotq\n"
"float64[7] tau_commanded\n"
"float64[7] tau_desired_g\n"
"float64[7] tau_desired_full\n"
"float64[7] tau_measured\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::franka_planner_control::JointStates_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::franka_planner_control::JointStates_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.time);
      stream.next(m.xe_r);
      stream.next(m.xe_v);
      stream.next(m.xe);
      stream.next(m.q_r);
      stream.next(m.q_v);
      stream.next(m.q);
      stream.next(m.dotq);
      stream.next(m.tau_commanded);
      stream.next(m.tau_desired_g);
      stream.next(m.tau_desired_full);
      stream.next(m.tau_measured);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointStates_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::franka_planner_control::JointStates_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::franka_planner_control::JointStates_<ContainerAllocator>& v)
  {
    s << indent << "time: ";
    Printer<double>::stream(s, indent + "  ", v.time);
    s << indent << "xe_r: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.xe_r);
    s << indent << "xe_v: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.xe_v);
    s << indent << "xe: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.xe);
    s << indent << "q_r[]" << std::endl;
    for (size_t i = 0; i < v.q_r.size(); ++i)
    {
      s << indent << "  q_r[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.q_r[i]);
    }
    s << indent << "q_v[]" << std::endl;
    for (size_t i = 0; i < v.q_v.size(); ++i)
    {
      s << indent << "  q_v[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.q_v[i]);
    }
    s << indent << "q[]" << std::endl;
    for (size_t i = 0; i < v.q.size(); ++i)
    {
      s << indent << "  q[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.q[i]);
    }
    s << indent << "dotq[]" << std::endl;
    for (size_t i = 0; i < v.dotq.size(); ++i)
    {
      s << indent << "  dotq[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.dotq[i]);
    }
    s << indent << "tau_commanded[]" << std::endl;
    for (size_t i = 0; i < v.tau_commanded.size(); ++i)
    {
      s << indent << "  tau_commanded[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.tau_commanded[i]);
    }
    s << indent << "tau_desired_g[]" << std::endl;
    for (size_t i = 0; i < v.tau_desired_g.size(); ++i)
    {
      s << indent << "  tau_desired_g[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.tau_desired_g[i]);
    }
    s << indent << "tau_desired_full[]" << std::endl;
    for (size_t i = 0; i < v.tau_desired_full.size(); ++i)
    {
      s << indent << "  tau_desired_full[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.tau_desired_full[i]);
    }
    s << indent << "tau_measured[]" << std::endl;
    for (size_t i = 0; i < v.tau_measured.size(); ++i)
    {
      s << indent << "  tau_measured[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.tau_measured[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // FRANKA_PLANNER_CONTROL_MESSAGE_JOINTSTATES_H
