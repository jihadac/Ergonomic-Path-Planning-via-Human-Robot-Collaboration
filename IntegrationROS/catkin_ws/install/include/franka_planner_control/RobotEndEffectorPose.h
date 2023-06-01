// Generated by gencpp from file franka_planner_control/RobotEndEffectorPose.msg
// DO NOT EDIT!


#ifndef FRANKA_PLANNER_CONTROL_MESSAGE_ROBOTENDEFFECTORPOSE_H
#define FRANKA_PLANNER_CONTROL_MESSAGE_ROBOTENDEFFECTORPOSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace franka_planner_control
{
template <class ContainerAllocator>
struct RobotEndEffectorPose_
{
  typedef RobotEndEffectorPose_<ContainerAllocator> Type;

  RobotEndEffectorPose_()
    : rviz_orientation_problem(false)
    , xe_r()  {
    }
  RobotEndEffectorPose_(const ContainerAllocator& _alloc)
    : rviz_orientation_problem(false)
    , xe_r(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _rviz_orientation_problem_type;
  _rviz_orientation_problem_type rviz_orientation_problem;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _xe_r_type;
  _xe_r_type xe_r;





  typedef boost::shared_ptr< ::franka_planner_control::RobotEndEffectorPose_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::franka_planner_control::RobotEndEffectorPose_<ContainerAllocator> const> ConstPtr;

}; // struct RobotEndEffectorPose_

typedef ::franka_planner_control::RobotEndEffectorPose_<std::allocator<void> > RobotEndEffectorPose;

typedef boost::shared_ptr< ::franka_planner_control::RobotEndEffectorPose > RobotEndEffectorPosePtr;
typedef boost::shared_ptr< ::franka_planner_control::RobotEndEffectorPose const> RobotEndEffectorPoseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::franka_planner_control::RobotEndEffectorPose_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::franka_planner_control::RobotEndEffectorPose_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::franka_planner_control::RobotEndEffectorPose_<ContainerAllocator1> & lhs, const ::franka_planner_control::RobotEndEffectorPose_<ContainerAllocator2> & rhs)
{
  return lhs.rviz_orientation_problem == rhs.rviz_orientation_problem &&
    lhs.xe_r == rhs.xe_r;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::franka_planner_control::RobotEndEffectorPose_<ContainerAllocator1> & lhs, const ::franka_planner_control::RobotEndEffectorPose_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace franka_planner_control

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::franka_planner_control::RobotEndEffectorPose_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::franka_planner_control::RobotEndEffectorPose_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::franka_planner_control::RobotEndEffectorPose_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::franka_planner_control::RobotEndEffectorPose_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::franka_planner_control::RobotEndEffectorPose_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::franka_planner_control::RobotEndEffectorPose_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::franka_planner_control::RobotEndEffectorPose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "08713e20671c442197b0728d63307e52";
  }

  static const char* value(const ::franka_planner_control::RobotEndEffectorPose_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x08713e20671c4421ULL;
  static const uint64_t static_value2 = 0x97b0728d63307e52ULL;
};

template<class ContainerAllocator>
struct DataType< ::franka_planner_control::RobotEndEffectorPose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "franka_planner_control/RobotEndEffectorPose";
  }

  static const char* value(const ::franka_planner_control::RobotEndEffectorPose_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::franka_planner_control::RobotEndEffectorPose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool rviz_orientation_problem\n"
"geometry_msgs/Pose xe_r\n"
"\n"
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

  static const char* value(const ::franka_planner_control::RobotEndEffectorPose_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::franka_planner_control::RobotEndEffectorPose_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.rviz_orientation_problem);
      stream.next(m.xe_r);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RobotEndEffectorPose_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::franka_planner_control::RobotEndEffectorPose_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::franka_planner_control::RobotEndEffectorPose_<ContainerAllocator>& v)
  {
    s << indent << "rviz_orientation_problem: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rviz_orientation_problem);
    s << indent << "xe_r: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.xe_r);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FRANKA_PLANNER_CONTROL_MESSAGE_ROBOTENDEFFECTORPOSE_H