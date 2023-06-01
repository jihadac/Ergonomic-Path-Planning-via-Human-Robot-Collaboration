# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from franka_planner_control/JointStates.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class JointStates(genpy.Message):
  _md5sum = "3c8f4ba03149d875ee8618cf39cc73dc"
  _type = "franka_planner_control/JointStates"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """float64 time
geometry_msgs/Pose xe_r
geometry_msgs/Pose xe_v
geometry_msgs/Pose xe
float64[7] q_r
float64[7] q_v
float64[7] q
float64[7] dotq
float64[7] tau_commanded
float64[7] tau_desired_g
float64[7] tau_desired_full
float64[7] tau_measured
================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
"""
  __slots__ = ['time','xe_r','xe_v','xe','q_r','q_v','q','dotq','tau_commanded','tau_desired_g','tau_desired_full','tau_measured']
  _slot_types = ['float64','geometry_msgs/Pose','geometry_msgs/Pose','geometry_msgs/Pose','float64[7]','float64[7]','float64[7]','float64[7]','float64[7]','float64[7]','float64[7]','float64[7]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       time,xe_r,xe_v,xe,q_r,q_v,q,dotq,tau_commanded,tau_desired_g,tau_desired_full,tau_measured

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(JointStates, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.time is None:
        self.time = 0.
      if self.xe_r is None:
        self.xe_r = geometry_msgs.msg.Pose()
      if self.xe_v is None:
        self.xe_v = geometry_msgs.msg.Pose()
      if self.xe is None:
        self.xe = geometry_msgs.msg.Pose()
      if self.q_r is None:
        self.q_r = [0.] * 7
      if self.q_v is None:
        self.q_v = [0.] * 7
      if self.q is None:
        self.q = [0.] * 7
      if self.dotq is None:
        self.dotq = [0.] * 7
      if self.tau_commanded is None:
        self.tau_commanded = [0.] * 7
      if self.tau_desired_g is None:
        self.tau_desired_g = [0.] * 7
      if self.tau_desired_full is None:
        self.tau_desired_full = [0.] * 7
      if self.tau_measured is None:
        self.tau_measured = [0.] * 7
    else:
      self.time = 0.
      self.xe_r = geometry_msgs.msg.Pose()
      self.xe_v = geometry_msgs.msg.Pose()
      self.xe = geometry_msgs.msg.Pose()
      self.q_r = [0.] * 7
      self.q_v = [0.] * 7
      self.q = [0.] * 7
      self.dotq = [0.] * 7
      self.tau_commanded = [0.] * 7
      self.tau_desired_g = [0.] * 7
      self.tau_desired_full = [0.] * 7
      self.tau_measured = [0.] * 7

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_22d().pack(_x.time, _x.xe_r.position.x, _x.xe_r.position.y, _x.xe_r.position.z, _x.xe_r.orientation.x, _x.xe_r.orientation.y, _x.xe_r.orientation.z, _x.xe_r.orientation.w, _x.xe_v.position.x, _x.xe_v.position.y, _x.xe_v.position.z, _x.xe_v.orientation.x, _x.xe_v.orientation.y, _x.xe_v.orientation.z, _x.xe_v.orientation.w, _x.xe.position.x, _x.xe.position.y, _x.xe.position.z, _x.xe.orientation.x, _x.xe.orientation.y, _x.xe.orientation.z, _x.xe.orientation.w))
      buff.write(_get_struct_7d().pack(*self.q_r))
      buff.write(_get_struct_7d().pack(*self.q_v))
      buff.write(_get_struct_7d().pack(*self.q))
      buff.write(_get_struct_7d().pack(*self.dotq))
      buff.write(_get_struct_7d().pack(*self.tau_commanded))
      buff.write(_get_struct_7d().pack(*self.tau_desired_g))
      buff.write(_get_struct_7d().pack(*self.tau_desired_full))
      buff.write(_get_struct_7d().pack(*self.tau_measured))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.xe_r is None:
        self.xe_r = geometry_msgs.msg.Pose()
      if self.xe_v is None:
        self.xe_v = geometry_msgs.msg.Pose()
      if self.xe is None:
        self.xe = geometry_msgs.msg.Pose()
      end = 0
      _x = self
      start = end
      end += 176
      (_x.time, _x.xe_r.position.x, _x.xe_r.position.y, _x.xe_r.position.z, _x.xe_r.orientation.x, _x.xe_r.orientation.y, _x.xe_r.orientation.z, _x.xe_r.orientation.w, _x.xe_v.position.x, _x.xe_v.position.y, _x.xe_v.position.z, _x.xe_v.orientation.x, _x.xe_v.orientation.y, _x.xe_v.orientation.z, _x.xe_v.orientation.w, _x.xe.position.x, _x.xe.position.y, _x.xe.position.z, _x.xe.orientation.x, _x.xe.orientation.y, _x.xe.orientation.z, _x.xe.orientation.w,) = _get_struct_22d().unpack(str[start:end])
      start = end
      end += 56
      self.q_r = _get_struct_7d().unpack(str[start:end])
      start = end
      end += 56
      self.q_v = _get_struct_7d().unpack(str[start:end])
      start = end
      end += 56
      self.q = _get_struct_7d().unpack(str[start:end])
      start = end
      end += 56
      self.dotq = _get_struct_7d().unpack(str[start:end])
      start = end
      end += 56
      self.tau_commanded = _get_struct_7d().unpack(str[start:end])
      start = end
      end += 56
      self.tau_desired_g = _get_struct_7d().unpack(str[start:end])
      start = end
      end += 56
      self.tau_desired_full = _get_struct_7d().unpack(str[start:end])
      start = end
      end += 56
      self.tau_measured = _get_struct_7d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_22d().pack(_x.time, _x.xe_r.position.x, _x.xe_r.position.y, _x.xe_r.position.z, _x.xe_r.orientation.x, _x.xe_r.orientation.y, _x.xe_r.orientation.z, _x.xe_r.orientation.w, _x.xe_v.position.x, _x.xe_v.position.y, _x.xe_v.position.z, _x.xe_v.orientation.x, _x.xe_v.orientation.y, _x.xe_v.orientation.z, _x.xe_v.orientation.w, _x.xe.position.x, _x.xe.position.y, _x.xe.position.z, _x.xe.orientation.x, _x.xe.orientation.y, _x.xe.orientation.z, _x.xe.orientation.w))
      buff.write(self.q_r.tostring())
      buff.write(self.q_v.tostring())
      buff.write(self.q.tostring())
      buff.write(self.dotq.tostring())
      buff.write(self.tau_commanded.tostring())
      buff.write(self.tau_desired_g.tostring())
      buff.write(self.tau_desired_full.tostring())
      buff.write(self.tau_measured.tostring())
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.xe_r is None:
        self.xe_r = geometry_msgs.msg.Pose()
      if self.xe_v is None:
        self.xe_v = geometry_msgs.msg.Pose()
      if self.xe is None:
        self.xe = geometry_msgs.msg.Pose()
      end = 0
      _x = self
      start = end
      end += 176
      (_x.time, _x.xe_r.position.x, _x.xe_r.position.y, _x.xe_r.position.z, _x.xe_r.orientation.x, _x.xe_r.orientation.y, _x.xe_r.orientation.z, _x.xe_r.orientation.w, _x.xe_v.position.x, _x.xe_v.position.y, _x.xe_v.position.z, _x.xe_v.orientation.x, _x.xe_v.orientation.y, _x.xe_v.orientation.z, _x.xe_v.orientation.w, _x.xe.position.x, _x.xe.position.y, _x.xe.position.z, _x.xe.orientation.x, _x.xe.orientation.y, _x.xe.orientation.z, _x.xe.orientation.w,) = _get_struct_22d().unpack(str[start:end])
      start = end
      end += 56
      self.q_r = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=7)
      start = end
      end += 56
      self.q_v = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=7)
      start = end
      end += 56
      self.q = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=7)
      start = end
      end += 56
      self.dotq = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=7)
      start = end
      end += 56
      self.tau_commanded = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=7)
      start = end
      end += 56
      self.tau_desired_g = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=7)
      start = end
      end += 56
      self.tau_desired_full = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=7)
      start = end
      end += 56
      self.tau_measured = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=7)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_22d = None
def _get_struct_22d():
    global _struct_22d
    if _struct_22d is None:
        _struct_22d = struct.Struct("<22d")
    return _struct_22d
_struct_7d = None
def _get_struct_7d():
    global _struct_7d
    if _struct_7d is None:
        _struct_7d = struct.Struct("<7d")
    return _struct_7d