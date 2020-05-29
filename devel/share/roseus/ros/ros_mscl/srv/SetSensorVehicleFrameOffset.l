;; Auto-generated. Do not edit!


(when (boundp 'ros_mscl::SetSensorVehicleFrameOffset)
  (if (not (find-package "ROS_MSCL"))
    (make-package "ROS_MSCL"))
  (shadow 'SetSensorVehicleFrameOffset (find-package "ROS_MSCL")))
(unless (find-package "ROS_MSCL::SETSENSORVEHICLEFRAMEOFFSET")
  (make-package "ROS_MSCL::SETSENSORVEHICLEFRAMEOFFSET"))
(unless (find-package "ROS_MSCL::SETSENSORVEHICLEFRAMEOFFSETREQUEST")
  (make-package "ROS_MSCL::SETSENSORVEHICLEFRAMEOFFSETREQUEST"))
(unless (find-package "ROS_MSCL::SETSENSORVEHICLEFRAMEOFFSETRESPONSE")
  (make-package "ROS_MSCL::SETSENSORVEHICLEFRAMEOFFSETRESPONSE"))

(in-package "ROS")

(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))




(defclass ros_mscl::SetSensorVehicleFrameOffsetRequest
  :super ros::object
  :slots (_offset ))

(defmethod ros_mscl::SetSensorVehicleFrameOffsetRequest
  (:init
   (&key
    ((:offset __offset) (instance geometry_msgs::Vector3 :init))
    )
   (send-super :init)
   (setq _offset __offset)
   self)
  (:offset
   (&rest __offset)
   (if (keywordp (car __offset))
       (send* _offset __offset)
     (progn
       (if __offset (setq _offset (car __offset)))
       _offset)))
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/Vector3 _offset
    (send _offset :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/Vector3 _offset
       (send _offset :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/Vector3 _offset
     (send _offset :deserialize buf ptr-) (incf ptr- (send _offset :serialization-length))
   ;;
   self)
  )

(defclass ros_mscl::SetSensorVehicleFrameOffsetResponse
  :super ros::object
  :slots (_success ))

(defmethod ros_mscl::SetSensorVehicleFrameOffsetResponse
  (:init
   (&key
    ((:success __success) nil)
    )
   (send-super :init)
   (setq _success __success)
   self)
  (:success
   (&optional __success)
   (if __success (setq _success __success)) _success)
  (:serialization-length
   ()
   (+
    ;; bool _success
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _success
       (if _success (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _success
     (setq _success (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass ros_mscl::SetSensorVehicleFrameOffset
  :super ros::object
  :slots ())

(setf (get ros_mscl::SetSensorVehicleFrameOffset :md5sum-) "17d27ff1259ce523baf9de57b7c37e18")
(setf (get ros_mscl::SetSensorVehicleFrameOffset :datatype-) "ros_mscl/SetSensorVehicleFrameOffset")
(setf (get ros_mscl::SetSensorVehicleFrameOffset :request) ros_mscl::SetSensorVehicleFrameOffsetRequest)
(setf (get ros_mscl::SetSensorVehicleFrameOffset :response) ros_mscl::SetSensorVehicleFrameOffsetResponse)

(defmethod ros_mscl::SetSensorVehicleFrameOffsetRequest
  (:response () (instance ros_mscl::SetSensorVehicleFrameOffsetResponse :init)))

(setf (get ros_mscl::SetSensorVehicleFrameOffsetRequest :md5sum-) "17d27ff1259ce523baf9de57b7c37e18")
(setf (get ros_mscl::SetSensorVehicleFrameOffsetRequest :datatype-) "ros_mscl/SetSensorVehicleFrameOffsetRequest")
(setf (get ros_mscl::SetSensorVehicleFrameOffsetRequest :definition-)
      "geometry_msgs/Vector3 offset

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
---
bool success

")

(setf (get ros_mscl::SetSensorVehicleFrameOffsetResponse :md5sum-) "17d27ff1259ce523baf9de57b7c37e18")
(setf (get ros_mscl::SetSensorVehicleFrameOffsetResponse :datatype-) "ros_mscl/SetSensorVehicleFrameOffsetResponse")
(setf (get ros_mscl::SetSensorVehicleFrameOffsetResponse :definition-)
      "geometry_msgs/Vector3 offset

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
---
bool success

")



(provide :ros_mscl/SetSensorVehicleFrameOffset "17d27ff1259ce523baf9de57b7c37e18")


