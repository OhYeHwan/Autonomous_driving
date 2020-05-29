;; Auto-generated. Do not edit!


(when (boundp 'ros_mscl::SetSensorVehicleFrameTrans)
  (if (not (find-package "ROS_MSCL"))
    (make-package "ROS_MSCL"))
  (shadow 'SetSensorVehicleFrameTrans (find-package "ROS_MSCL")))
(unless (find-package "ROS_MSCL::SETSENSORVEHICLEFRAMETRANS")
  (make-package "ROS_MSCL::SETSENSORVEHICLEFRAMETRANS"))
(unless (find-package "ROS_MSCL::SETSENSORVEHICLEFRAMETRANSREQUEST")
  (make-package "ROS_MSCL::SETSENSORVEHICLEFRAMETRANSREQUEST"))
(unless (find-package "ROS_MSCL::SETSENSORVEHICLEFRAMETRANSRESPONSE")
  (make-package "ROS_MSCL::SETSENSORVEHICLEFRAMETRANSRESPONSE"))

(in-package "ROS")

(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))




(defclass ros_mscl::SetSensorVehicleFrameTransRequest
  :super ros::object
  :slots (_angle ))

(defmethod ros_mscl::SetSensorVehicleFrameTransRequest
  (:init
   (&key
    ((:angle __angle) (instance geometry_msgs::Vector3 :init))
    )
   (send-super :init)
   (setq _angle __angle)
   self)
  (:angle
   (&rest __angle)
   (if (keywordp (car __angle))
       (send* _angle __angle)
     (progn
       (if __angle (setq _angle (car __angle)))
       _angle)))
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/Vector3 _angle
    (send _angle :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/Vector3 _angle
       (send _angle :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/Vector3 _angle
     (send _angle :deserialize buf ptr-) (incf ptr- (send _angle :serialization-length))
   ;;
   self)
  )

(defclass ros_mscl::SetSensorVehicleFrameTransResponse
  :super ros::object
  :slots (_success ))

(defmethod ros_mscl::SetSensorVehicleFrameTransResponse
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

(defclass ros_mscl::SetSensorVehicleFrameTrans
  :super ros::object
  :slots ())

(setf (get ros_mscl::SetSensorVehicleFrameTrans :md5sum-) "dae0af6e9e855f125599090c94e6955e")
(setf (get ros_mscl::SetSensorVehicleFrameTrans :datatype-) "ros_mscl/SetSensorVehicleFrameTrans")
(setf (get ros_mscl::SetSensorVehicleFrameTrans :request) ros_mscl::SetSensorVehicleFrameTransRequest)
(setf (get ros_mscl::SetSensorVehicleFrameTrans :response) ros_mscl::SetSensorVehicleFrameTransResponse)

(defmethod ros_mscl::SetSensorVehicleFrameTransRequest
  (:response () (instance ros_mscl::SetSensorVehicleFrameTransResponse :init)))

(setf (get ros_mscl::SetSensorVehicleFrameTransRequest :md5sum-) "dae0af6e9e855f125599090c94e6955e")
(setf (get ros_mscl::SetSensorVehicleFrameTransRequest :datatype-) "ros_mscl/SetSensorVehicleFrameTransRequest")
(setf (get ros_mscl::SetSensorVehicleFrameTransRequest :definition-)
      "geometry_msgs/Vector3 angle

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

(setf (get ros_mscl::SetSensorVehicleFrameTransResponse :md5sum-) "dae0af6e9e855f125599090c94e6955e")
(setf (get ros_mscl::SetSensorVehicleFrameTransResponse :datatype-) "ros_mscl/SetSensorVehicleFrameTransResponse")
(setf (get ros_mscl::SetSensorVehicleFrameTransResponse :definition-)
      "geometry_msgs/Vector3 angle

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



(provide :ros_mscl/SetSensorVehicleFrameTrans "dae0af6e9e855f125599090c94e6955e")


