; Auto-generated. Do not edit!


(cl:in-package franka_planner_control-msg)


;//! \htmlinclude JointStates.msg.html

(cl:defclass <JointStates> (roslisp-msg-protocol:ros-message)
  ((time
    :reader time
    :initarg :time
    :type cl:float
    :initform 0.0)
   (xe_r
    :reader xe_r
    :initarg :xe_r
    :type geometry_msgs-msg:Pose
    :initform (cl:make-instance 'geometry_msgs-msg:Pose))
   (xe_v
    :reader xe_v
    :initarg :xe_v
    :type geometry_msgs-msg:Pose
    :initform (cl:make-instance 'geometry_msgs-msg:Pose))
   (xe
    :reader xe
    :initarg :xe
    :type geometry_msgs-msg:Pose
    :initform (cl:make-instance 'geometry_msgs-msg:Pose))
   (q_r
    :reader q_r
    :initarg :q_r
    :type (cl:vector cl:float)
   :initform (cl:make-array 7 :element-type 'cl:float :initial-element 0.0))
   (q_v
    :reader q_v
    :initarg :q_v
    :type (cl:vector cl:float)
   :initform (cl:make-array 7 :element-type 'cl:float :initial-element 0.0))
   (q
    :reader q
    :initarg :q
    :type (cl:vector cl:float)
   :initform (cl:make-array 7 :element-type 'cl:float :initial-element 0.0))
   (dotq
    :reader dotq
    :initarg :dotq
    :type (cl:vector cl:float)
   :initform (cl:make-array 7 :element-type 'cl:float :initial-element 0.0))
   (tau_commanded
    :reader tau_commanded
    :initarg :tau_commanded
    :type (cl:vector cl:float)
   :initform (cl:make-array 7 :element-type 'cl:float :initial-element 0.0))
   (tau_desired_g
    :reader tau_desired_g
    :initarg :tau_desired_g
    :type (cl:vector cl:float)
   :initform (cl:make-array 7 :element-type 'cl:float :initial-element 0.0))
   (tau_desired_full
    :reader tau_desired_full
    :initarg :tau_desired_full
    :type (cl:vector cl:float)
   :initform (cl:make-array 7 :element-type 'cl:float :initial-element 0.0))
   (tau_measured
    :reader tau_measured
    :initarg :tau_measured
    :type (cl:vector cl:float)
   :initform (cl:make-array 7 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass JointStates (<JointStates>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <JointStates>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'JointStates)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name franka_planner_control-msg:<JointStates> is deprecated: use franka_planner_control-msg:JointStates instead.")))

(cl:ensure-generic-function 'time-val :lambda-list '(m))
(cl:defmethod time-val ((m <JointStates>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader franka_planner_control-msg:time-val is deprecated.  Use franka_planner_control-msg:time instead.")
  (time m))

(cl:ensure-generic-function 'xe_r-val :lambda-list '(m))
(cl:defmethod xe_r-val ((m <JointStates>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader franka_planner_control-msg:xe_r-val is deprecated.  Use franka_planner_control-msg:xe_r instead.")
  (xe_r m))

(cl:ensure-generic-function 'xe_v-val :lambda-list '(m))
(cl:defmethod xe_v-val ((m <JointStates>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader franka_planner_control-msg:xe_v-val is deprecated.  Use franka_planner_control-msg:xe_v instead.")
  (xe_v m))

(cl:ensure-generic-function 'xe-val :lambda-list '(m))
(cl:defmethod xe-val ((m <JointStates>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader franka_planner_control-msg:xe-val is deprecated.  Use franka_planner_control-msg:xe instead.")
  (xe m))

(cl:ensure-generic-function 'q_r-val :lambda-list '(m))
(cl:defmethod q_r-val ((m <JointStates>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader franka_planner_control-msg:q_r-val is deprecated.  Use franka_planner_control-msg:q_r instead.")
  (q_r m))

(cl:ensure-generic-function 'q_v-val :lambda-list '(m))
(cl:defmethod q_v-val ((m <JointStates>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader franka_planner_control-msg:q_v-val is deprecated.  Use franka_planner_control-msg:q_v instead.")
  (q_v m))

(cl:ensure-generic-function 'q-val :lambda-list '(m))
(cl:defmethod q-val ((m <JointStates>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader franka_planner_control-msg:q-val is deprecated.  Use franka_planner_control-msg:q instead.")
  (q m))

(cl:ensure-generic-function 'dotq-val :lambda-list '(m))
(cl:defmethod dotq-val ((m <JointStates>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader franka_planner_control-msg:dotq-val is deprecated.  Use franka_planner_control-msg:dotq instead.")
  (dotq m))

(cl:ensure-generic-function 'tau_commanded-val :lambda-list '(m))
(cl:defmethod tau_commanded-val ((m <JointStates>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader franka_planner_control-msg:tau_commanded-val is deprecated.  Use franka_planner_control-msg:tau_commanded instead.")
  (tau_commanded m))

(cl:ensure-generic-function 'tau_desired_g-val :lambda-list '(m))
(cl:defmethod tau_desired_g-val ((m <JointStates>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader franka_planner_control-msg:tau_desired_g-val is deprecated.  Use franka_planner_control-msg:tau_desired_g instead.")
  (tau_desired_g m))

(cl:ensure-generic-function 'tau_desired_full-val :lambda-list '(m))
(cl:defmethod tau_desired_full-val ((m <JointStates>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader franka_planner_control-msg:tau_desired_full-val is deprecated.  Use franka_planner_control-msg:tau_desired_full instead.")
  (tau_desired_full m))

(cl:ensure-generic-function 'tau_measured-val :lambda-list '(m))
(cl:defmethod tau_measured-val ((m <JointStates>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader franka_planner_control-msg:tau_measured-val is deprecated.  Use franka_planner_control-msg:tau_measured instead.")
  (tau_measured m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <JointStates>) ostream)
  "Serializes a message object of type '<JointStates>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'time))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'xe_r) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'xe_v) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'xe) ostream)
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'q_r))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'q_v))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'q))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'dotq))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'tau_commanded))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'tau_desired_g))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'tau_desired_full))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'tau_measured))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <JointStates>) istream)
  "Deserializes a message object of type '<JointStates>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'time) (roslisp-utils:decode-double-float-bits bits)))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'xe_r) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'xe_v) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'xe) istream)
  (cl:setf (cl:slot-value msg 'q_r) (cl:make-array 7))
  (cl:let ((vals (cl:slot-value msg 'q_r)))
    (cl:dotimes (i 7)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-double-float-bits bits)))))
  (cl:setf (cl:slot-value msg 'q_v) (cl:make-array 7))
  (cl:let ((vals (cl:slot-value msg 'q_v)))
    (cl:dotimes (i 7)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-double-float-bits bits)))))
  (cl:setf (cl:slot-value msg 'q) (cl:make-array 7))
  (cl:let ((vals (cl:slot-value msg 'q)))
    (cl:dotimes (i 7)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-double-float-bits bits)))))
  (cl:setf (cl:slot-value msg 'dotq) (cl:make-array 7))
  (cl:let ((vals (cl:slot-value msg 'dotq)))
    (cl:dotimes (i 7)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-double-float-bits bits)))))
  (cl:setf (cl:slot-value msg 'tau_commanded) (cl:make-array 7))
  (cl:let ((vals (cl:slot-value msg 'tau_commanded)))
    (cl:dotimes (i 7)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-double-float-bits bits)))))
  (cl:setf (cl:slot-value msg 'tau_desired_g) (cl:make-array 7))
  (cl:let ((vals (cl:slot-value msg 'tau_desired_g)))
    (cl:dotimes (i 7)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-double-float-bits bits)))))
  (cl:setf (cl:slot-value msg 'tau_desired_full) (cl:make-array 7))
  (cl:let ((vals (cl:slot-value msg 'tau_desired_full)))
    (cl:dotimes (i 7)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-double-float-bits bits)))))
  (cl:setf (cl:slot-value msg 'tau_measured) (cl:make-array 7))
  (cl:let ((vals (cl:slot-value msg 'tau_measured)))
    (cl:dotimes (i 7)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-double-float-bits bits)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<JointStates>)))
  "Returns string type for a message object of type '<JointStates>"
  "franka_planner_control/JointStates")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'JointStates)))
  "Returns string type for a message object of type 'JointStates"
  "franka_planner_control/JointStates")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<JointStates>)))
  "Returns md5sum for a message object of type '<JointStates>"
  "3c8f4ba03149d875ee8618cf39cc73dc")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'JointStates)))
  "Returns md5sum for a message object of type 'JointStates"
  "3c8f4ba03149d875ee8618cf39cc73dc")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<JointStates>)))
  "Returns full string definition for message of type '<JointStates>"
  (cl:format cl:nil "float64 time~%geometry_msgs/Pose xe_r~%geometry_msgs/Pose xe_v~%geometry_msgs/Pose xe~%float64[7] q_r~%float64[7] q_v~%float64[7] q~%float64[7] dotq~%float64[7] tau_commanded~%float64[7] tau_desired_g~%float64[7] tau_desired_full~%float64[7] tau_measured~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'JointStates)))
  "Returns full string definition for message of type 'JointStates"
  (cl:format cl:nil "float64 time~%geometry_msgs/Pose xe_r~%geometry_msgs/Pose xe_v~%geometry_msgs/Pose xe~%float64[7] q_r~%float64[7] q_v~%float64[7] q~%float64[7] dotq~%float64[7] tau_commanded~%float64[7] tau_desired_g~%float64[7] tau_desired_full~%float64[7] tau_measured~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <JointStates>))
  (cl:+ 0
     8
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'xe_r))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'xe_v))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'xe))
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'q_r) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'q_v) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'q) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'dotq) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'tau_commanded) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'tau_desired_g) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'tau_desired_full) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'tau_measured) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <JointStates>))
  "Converts a ROS message object to a list"
  (cl:list 'JointStates
    (cl:cons ':time (time msg))
    (cl:cons ':xe_r (xe_r msg))
    (cl:cons ':xe_v (xe_v msg))
    (cl:cons ':xe (xe msg))
    (cl:cons ':q_r (q_r msg))
    (cl:cons ':q_v (q_v msg))
    (cl:cons ':q (q msg))
    (cl:cons ':dotq (dotq msg))
    (cl:cons ':tau_commanded (tau_commanded msg))
    (cl:cons ':tau_desired_g (tau_desired_g msg))
    (cl:cons ':tau_desired_full (tau_desired_full msg))
    (cl:cons ':tau_measured (tau_measured msg))
))
