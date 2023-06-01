// Generated by gencpp from file ros_openpose/Frame.msg
// DO NOT EDIT!


#ifndef ROS_OPENPOSE_MESSAGE_FRAME_H
#define ROS_OPENPOSE_MESSAGE_FRAME_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <ros_openpose/Person.h>

namespace ros_openpose
{
template <class ContainerAllocator>
struct Frame_
{
  typedef Frame_<ContainerAllocator> Type;

  Frame_()
    : header()
    , persons()  {
    }
  Frame_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , persons(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::ros_openpose::Person_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::ros_openpose::Person_<ContainerAllocator> >::other >  _persons_type;
  _persons_type persons;





  typedef boost::shared_ptr< ::ros_openpose::Frame_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_openpose::Frame_<ContainerAllocator> const> ConstPtr;

}; // struct Frame_

typedef ::ros_openpose::Frame_<std::allocator<void> > Frame;

typedef boost::shared_ptr< ::ros_openpose::Frame > FramePtr;
typedef boost::shared_ptr< ::ros_openpose::Frame const> FrameConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_openpose::Frame_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_openpose::Frame_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ros_openpose::Frame_<ContainerAllocator1> & lhs, const ::ros_openpose::Frame_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.persons == rhs.persons;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ros_openpose::Frame_<ContainerAllocator1> & lhs, const ::ros_openpose::Frame_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ros_openpose

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ros_openpose::Frame_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_openpose::Frame_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_openpose::Frame_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_openpose::Frame_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_openpose::Frame_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_openpose::Frame_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_openpose::Frame_<ContainerAllocator> >
{
  static const char* value()
  {
    return "94820d383431e16fe25dc23f65e5a9e8";
  }

  static const char* value(const ::ros_openpose::Frame_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x94820d383431e16fULL;
  static const uint64_t static_value2 = 0xe25dc23f65e5a9e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_openpose::Frame_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_openpose/Frame";
  }

  static const char* value(const ::ros_openpose::Frame_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_openpose::Frame_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The standard ROS message contains a header.\n"
"# There can be multiple people in a frame.\n"
"# Hence we created an array of a person.\n"
"# We should name this array as people.\n"
"# However, for me, while coding persons\n"
"# make much more sense as it resembles\n"
"# the data structure array.\n"
"Header header\n"
"Person[] persons\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: ros_openpose/Person\n"
"# A person has some body parts. That is why we have created\n"
"# an array of body parts.\n"
"BodyPart[] bodyParts\n"
"BodyPart[] leftHandParts\n"
"BodyPart[] rightHandParts\n"
"BodyPart[] faceParts\n"
"\n"
"================================================================================\n"
"MSG: ros_openpose/BodyPart\n"
"# The location and score of body parts are stored in a float array.\n"
"# Therefore we are using 32 bits instead of 64 bits.\n"
"# src: https://github.com/CMU-Perceptual-Computing-Lab/openpose/blob/master/include/openpose/core/datum.hpp\n"
"float32 score\n"
"Pixel pixel\n"
"geometry_msgs/Point32 point\n"
"\n"
"================================================================================\n"
"MSG: ros_openpose/Pixel\n"
"# The location and score of body parts are stored in a float array.\n"
"# Therefore we are using 32 bits instead of 64 bits.\n"
"# src: https://github.com/CMU-Perceptual-Computing-Lab/openpose/blob/master/include/openpose/core/datum.hpp\n"
"# The location has been resized to the desired output\n"
"# resolution (e.g., `resolution` flag in the demo).\n"
"float32 x\n"
"float32 y\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point32\n"
"# This contains the position of a point in free space(with 32 bits of precision).\n"
"# It is recommeded to use Point wherever possible instead of Point32.  \n"
"# \n"
"# This recommendation is to promote interoperability.  \n"
"#\n"
"# This message is designed to take up less space when sending\n"
"# lots of points at once, as in the case of a PointCloud.  \n"
"\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
;
  }

  static const char* value(const ::ros_openpose::Frame_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_openpose::Frame_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.persons);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Frame_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_openpose::Frame_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_openpose::Frame_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "persons[]" << std::endl;
    for (size_t i = 0; i < v.persons.size(); ++i)
    {
      s << indent << "  persons[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::ros_openpose::Person_<ContainerAllocator> >::stream(s, indent + "    ", v.persons[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_OPENPOSE_MESSAGE_FRAME_H
