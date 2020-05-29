; Auto-generated. Do not edit!


(cl:in-package ros_mscl-srv)


;//! \htmlinclude SetGyroNoise-request.msg.html

(cl:defclass <SetGyroNoise-request> (roslisp-msg-protocol:ros-message)
  ((noise
    :reader noise
    :initarg :noise
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3)))
)

(cl:defclass SetGyroNoise-request (<SetGyroNoise-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetGyroNoise-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetGyroNoise-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ros_mscl-srv:<SetGyroNoise-request> is deprecated: use ros_mscl-srv:SetGyroNoise-request instead.")))

(cl:ensure-generic-function 'noise-val :lambda-list '(m))
(cl:defmethod noise-val ((m <SetGyroNoise-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_mscl-srv:noise-val is deprecated.  Use ros_mscl-srv:noise instead.")
  (noise m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetGyroNoise-request>) ostream)
  "Serializes a message object of type '<SetGyroNoise-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'noise) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetGyroNoise-request>) istream)
  "Deserializes a message object of type '<SetGyroNoise-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'noise) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetGyroNoise-request>)))
  "Returns string type for a service object of type '<SetGyroNoise-request>"
  "ros_mscl/SetGyroNoiseRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetGyroNoise-request)))
  "Returns string type for a service object of type 'SetGyroNoise-request"
  "ros_mscl/SetGyroNoiseRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetGyroNoise-request>)))
  "Returns md5sum for a message object of type '<SetGyroNoise-request>"
  "6a73c0e939ba0cee17d40a2e3a5f667f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetGyroNoise-request)))
  "Returns md5sum for a message object of type 'SetGyroNoise-request"
  "6a73c0e939ba0cee17d40a2e3a5f667f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetGyroNoise-request>)))
  "Returns full string definition for message of type '<SetGyroNoise-request>"
  (cl:format cl:nil "geometry_msgs/Vector3 noise~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetGyroNoise-request)))
  "Returns full string definition for message of type 'SetGyroNoise-request"
  (cl:format cl:nil "geometry_msgs/Vector3 noise~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetGyroNoise-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'noise))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetGyroNoise-request>))
  "Converts a ROS message object to a list"
  (cl:list 'SetGyroNoise-request
    (cl:cons ':noise (noise msg))
))
;//! \htmlinclude SetGyroNoise-response.msg.html

(cl:defclass <SetGyroNoise-response> (roslisp-msg-protocol:ros-message)
  ((success
    :reader success
    :initarg :success
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass SetGyroNoise-response (<SetGyroNoise-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetGyroNoise-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetGyroNoise-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ros_mscl-srv:<SetGyroNoise-response> is deprecated: use ros_mscl-srv:SetGyroNoise-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <SetGyroNoise-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_mscl-srv:success-val is deprecated.  Use ros_mscl-srv:success instead.")
  (success m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetGyroNoise-response>) ostream)
  "Serializes a message object of type '<SetGyroNoise-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetGyroNoise-response>) istream)
  "Deserializes a message object of type '<SetGyroNoise-response>"
    (cl:setf (cl:slot-value msg 'success) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetGyroNoise-response>)))
  "Returns string type for a service object of type '<SetGyroNoise-response>"
  "ros_mscl/SetGyroNoiseResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetGyroNoise-response)))
  "Returns string type for a service object of type 'SetGyroNoise-response"
  "ros_mscl/SetGyroNoiseResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetGyroNoise-response>)))
  "Returns md5sum for a message object of type '<SetGyroNoise-response>"
  "6a73c0e939ba0cee17d40a2e3a5f667f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetGyroNoise-response)))
  "Returns md5sum for a message object of type 'SetGyroNoise-response"
  "6a73c0e939ba0cee17d40a2e3a5f667f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetGyroNoise-response>)))
  "Returns full string definition for message of type '<SetGyroNoise-response>"
  (cl:format cl:nil "bool success~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetGyroNoise-response)))
  "Returns full string definition for message of type 'SetGyroNoise-response"
  (cl:format cl:nil "bool success~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetGyroNoise-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetGyroNoise-response>))
  "Converts a ROS message object to a list"
  (cl:list 'SetGyroNoise-response
    (cl:cons ':success (success msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'SetGyroNoise)))
  'SetGyroNoise-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'SetGyroNoise)))
  'SetGyroNoise-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetGyroNoise)))
  "Returns string type for a service object of type '<SetGyroNoise>"
  "ros_mscl/SetGyroNoise")