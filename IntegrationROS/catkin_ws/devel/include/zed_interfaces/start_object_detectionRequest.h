// Generated by gencpp from file zed_interfaces/start_object_detectionRequest.msg
// DO NOT EDIT!


#ifndef ZED_INTERFACES_MESSAGE_START_OBJECT_DETECTIONREQUEST_H
#define ZED_INTERFACES_MESSAGE_START_OBJECT_DETECTIONREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace zed_interfaces
{
template <class ContainerAllocator>
struct start_object_detectionRequest_
{
  typedef start_object_detectionRequest_<ContainerAllocator> Type;

  start_object_detectionRequest_()
    : model(0)
    , confidence(0.0)
    , max_range(0.0)
    , tracking(false)
    , sk_body_fitting(false)
    , mc_people(false)
    , mc_vehicles(false)
    , mc_bag(false)
    , mc_animal(false)
    , mc_electronics(false)
    , mc_fruit_vegetable(false)  {
    }
  start_object_detectionRequest_(const ContainerAllocator& _alloc)
    : model(0)
    , confidence(0.0)
    , max_range(0.0)
    , tracking(false)
    , sk_body_fitting(false)
    , mc_people(false)
    , mc_vehicles(false)
    , mc_bag(false)
    , mc_animal(false)
    , mc_electronics(false)
    , mc_fruit_vegetable(false)  {
  (void)_alloc;
    }



   typedef int8_t _model_type;
  _model_type model;

   typedef float _confidence_type;
  _confidence_type confidence;

   typedef float _max_range_type;
  _max_range_type max_range;

   typedef uint8_t _tracking_type;
  _tracking_type tracking;

   typedef uint8_t _sk_body_fitting_type;
  _sk_body_fitting_type sk_body_fitting;

   typedef uint8_t _mc_people_type;
  _mc_people_type mc_people;

   typedef uint8_t _mc_vehicles_type;
  _mc_vehicles_type mc_vehicles;

   typedef uint8_t _mc_bag_type;
  _mc_bag_type mc_bag;

   typedef uint8_t _mc_animal_type;
  _mc_animal_type mc_animal;

   typedef uint8_t _mc_electronics_type;
  _mc_electronics_type mc_electronics;

   typedef uint8_t _mc_fruit_vegetable_type;
  _mc_fruit_vegetable_type mc_fruit_vegetable;





  typedef boost::shared_ptr< ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct start_object_detectionRequest_

typedef ::zed_interfaces::start_object_detectionRequest_<std::allocator<void> > start_object_detectionRequest;

typedef boost::shared_ptr< ::zed_interfaces::start_object_detectionRequest > start_object_detectionRequestPtr;
typedef boost::shared_ptr< ::zed_interfaces::start_object_detectionRequest const> start_object_detectionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator1> & lhs, const ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator2> & rhs)
{
  return lhs.model == rhs.model &&
    lhs.confidence == rhs.confidence &&
    lhs.max_range == rhs.max_range &&
    lhs.tracking == rhs.tracking &&
    lhs.sk_body_fitting == rhs.sk_body_fitting &&
    lhs.mc_people == rhs.mc_people &&
    lhs.mc_vehicles == rhs.mc_vehicles &&
    lhs.mc_bag == rhs.mc_bag &&
    lhs.mc_animal == rhs.mc_animal &&
    lhs.mc_electronics == rhs.mc_electronics &&
    lhs.mc_fruit_vegetable == rhs.mc_fruit_vegetable;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator1> & lhs, const ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace zed_interfaces

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "50002fd3ef2d2a0c4d9f816ee7272ef8";
  }

  static const char* value(const ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x50002fd3ef2d2a0cULL;
  static const uint64_t static_value2 = 0x4d9f816ee7272ef8ULL;
};

template<class ContainerAllocator>
struct DataType< ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "zed_interfaces/start_object_detectionRequest";
  }

  static const char* value(const ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Starts object detection, if not automatically enabled with the parameter `object_detection/od_enabled`\n"
"\n"
"# OD Model\n"
"# '0': MULTI_CLASS_BOX - '1': MULTI_CLASS_BOX_ACCURATE - '2': HUMAN_BODY_FAST - '3': HUMAN_BODY_ACCURATE\n"
"int8 model\n"
"\n"
"# Minimum Confidence level\n"
"float32 confidence\n"
"\n"
"# MAx detection range\n"
"float32 max_range\n"
"\n"
"# Object tracking\n"
"bool tracking\n"
"\n"
"# Body Fitting\n"
"bool sk_body_fitting\n"
"\n"
"# Detect people (valid for Multi-class model)\n"
"bool mc_people\n"
"\n"
"# Detect vehicles\n"
"bool mc_vehicles\n"
"\n"
"# Detect bags\n"
"bool mc_bag\n"
"\n"
"# Detect animals\n"
"bool mc_animal\n"
"\n"
"# Detect electronic devices\n"
"bool mc_electronics\n"
"\n"
"# Detect fruits and vegetables\n"
"bool mc_fruit_vegetable\n"
"\n"
;
  }

  static const char* value(const ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.model);
      stream.next(m.confidence);
      stream.next(m.max_range);
      stream.next(m.tracking);
      stream.next(m.sk_body_fitting);
      stream.next(m.mc_people);
      stream.next(m.mc_vehicles);
      stream.next(m.mc_bag);
      stream.next(m.mc_animal);
      stream.next(m.mc_electronics);
      stream.next(m.mc_fruit_vegetable);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct start_object_detectionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::zed_interfaces::start_object_detectionRequest_<ContainerAllocator>& v)
  {
    s << indent << "model: ";
    Printer<int8_t>::stream(s, indent + "  ", v.model);
    s << indent << "confidence: ";
    Printer<float>::stream(s, indent + "  ", v.confidence);
    s << indent << "max_range: ";
    Printer<float>::stream(s, indent + "  ", v.max_range);
    s << indent << "tracking: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.tracking);
    s << indent << "sk_body_fitting: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sk_body_fitting);
    s << indent << "mc_people: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mc_people);
    s << indent << "mc_vehicles: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mc_vehicles);
    s << indent << "mc_bag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mc_bag);
    s << indent << "mc_animal: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mc_animal);
    s << indent << "mc_electronics: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mc_electronics);
    s << indent << "mc_fruit_vegetable: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mc_fruit_vegetable);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ZED_INTERFACES_MESSAGE_START_OBJECT_DETECTIONREQUEST_H