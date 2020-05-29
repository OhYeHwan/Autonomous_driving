;; Auto-generated. Do not edit!


(when (boundp 'ros_mscl::SetFilterEuler)
  (if (not (find-package "ROS_MSCL"))
    (make-package "ROS_MSCL"))
  (shadow 'SetFilterEuler (find-package "ROS_MSCL")))
(unless (find-package "ROS_MSCL::SETFILTEREULER")
  (make-package "ROS_MSCL::SETFILTEREULER"))
(unless (find-package "ROS_MSCL::SETFILTEREULERREQUEST")
  (make-package "ROS_MSCL::SETFILTEREULERREQUEST"))
(unless (find-package "ROS_MSCL::SETFILTEREULERRESPONSE")
  (make-package "ROS_MSCL::SETFILTEREULERRESPONSE"))

(in-package "ROS")

(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))




(defclass ros_mscl::SetFilterEulerRequest
  :super ros::object
  :slots (_angle ))

(defmethod ros_mscl::SetFilterEulerRequest
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

(defclass ros_mscl::SetFilterEulerResponse
  :super ros::object
  :slots (_success ))

(defmethod ros_mscl::SetFilterEulerResponse
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

(defclass ros_mscl::SetFilterEuler
  :super ros::object
  :slots ())

(setf (get ros_mscl::SetFilterEuler :md5sum-) "dae0af6e9e855f125599090c94e6955e")
(setf (get ros_mscl::SetFilterEuler :datatype-) "ros_mscl/SetFilterEuler")
(setf (get ros_mscl::SetFilterEuler :request) ros_mscl::SetFilterEulerRequest)
(setf (get ros_mscl::SetFilterEuler :response) ros_mscl::SetFilterEulerResponse)

(defmethod ros_mscl::SetFilterEulerRequest
  (:response () (instance ros_mscl::SetFilterEulerResponse :init)))

(setf (get ros_mscl::SetFilterEulerRequest :md5sum-) "dae0af6e9e855f125599090c94e6955e")
(setf (get ros_mscl::SetFilterEulerRequest :datatype-) "ros_mscl/SetFilterEulerRequest")
(setf (get ros_mscl::SetFilterEulerRequest :definition-)
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

(setf (get ros_mscl::SetFilterEulerResponse :md5sum-) "dae0af6e9e855f125599090c94e6955e")
(setf (get ros_mscl::SetFilterEulerResponse :datatype-) "ros_mscl/SetFilterEulerResponse")
(setf (get ros_mscl::SetFilterEulerResponse :definition-)
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



(provide :ros_mscl/SetFilterEuler "dae0af6e9e855f125599090c94e6955e")


