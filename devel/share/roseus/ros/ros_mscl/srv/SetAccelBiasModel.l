;; Auto-generated. Do not edit!


(when (boundp 'ros_mscl::SetAccelBiasModel)
  (if (not (find-package "ROS_MSCL"))
    (make-package "ROS_MSCL"))
  (shadow 'SetAccelBiasModel (find-package "ROS_MSCL")))
(unless (find-package "ROS_MSCL::SETACCELBIASMODEL")
  (make-package "ROS_MSCL::SETACCELBIASMODEL"))
(unless (find-package "ROS_MSCL::SETACCELBIASMODELREQUEST")
  (make-package "ROS_MSCL::SETACCELBIASMODELREQUEST"))
(unless (find-package "ROS_MSCL::SETACCELBIASMODELRESPONSE")
  (make-package "ROS_MSCL::SETACCELBIASMODELRESPONSE"))

(in-package "ROS")

(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))




(defclass ros_mscl::SetAccelBiasModelRequest
  :super ros::object
  :slots (_noise_vector _beta_vector ))

(defmethod ros_mscl::SetAccelBiasModelRequest
  (:init
   (&key
    ((:noise_vector __noise_vector) (instance geometry_msgs::Vector3 :init))
    ((:beta_vector __beta_vector) (instance geometry_msgs::Vector3 :init))
    )
   (send-super :init)
   (setq _noise_vector __noise_vector)
   (setq _beta_vector __beta_vector)
   self)
  (:noise_vector
   (&rest __noise_vector)
   (if (keywordp (car __noise_vector))
       (send* _noise_vector __noise_vector)
     (progn
       (if __noise_vector (setq _noise_vector (car __noise_vector)))
       _noise_vector)))
  (:beta_vector
   (&rest __beta_vector)
   (if (keywordp (car __beta_vector))
       (send* _beta_vector __beta_vector)
     (progn
       (if __beta_vector (setq _beta_vector (car __beta_vector)))
       _beta_vector)))
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/Vector3 _noise_vector
    (send _noise_vector :serialization-length)
    ;; geometry_msgs/Vector3 _beta_vector
    (send _beta_vector :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/Vector3 _noise_vector
       (send _noise_vector :serialize s)
     ;; geometry_msgs/Vector3 _beta_vector
       (send _beta_vector :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/Vector3 _noise_vector
     (send _noise_vector :deserialize buf ptr-) (incf ptr- (send _noise_vector :serialization-length))
   ;; geometry_msgs/Vector3 _beta_vector
     (send _beta_vector :deserialize buf ptr-) (incf ptr- (send _beta_vector :serialization-length))
   ;;
   self)
  )

(defclass ros_mscl::SetAccelBiasModelResponse
  :super ros::object
  :slots (_success ))

(defmethod ros_mscl::SetAccelBiasModelResponse
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

(defclass ros_mscl::SetAccelBiasModel
  :super ros::object
  :slots ())

(setf (get ros_mscl::SetAccelBiasModel :md5sum-) "f3cdd18c97add875be98974ab1d992b9")
(setf (get ros_mscl::SetAccelBiasModel :datatype-) "ros_mscl/SetAccelBiasModel")
(setf (get ros_mscl::SetAccelBiasModel :request) ros_mscl::SetAccelBiasModelRequest)
(setf (get ros_mscl::SetAccelBiasModel :response) ros_mscl::SetAccelBiasModelResponse)

(defmethod ros_mscl::SetAccelBiasModelRequest
  (:response () (instance ros_mscl::SetAccelBiasModelResponse :init)))

(setf (get ros_mscl::SetAccelBiasModelRequest :md5sum-) "f3cdd18c97add875be98974ab1d992b9")
(setf (get ros_mscl::SetAccelBiasModelRequest :datatype-) "ros_mscl/SetAccelBiasModelRequest")
(setf (get ros_mscl::SetAccelBiasModelRequest :definition-)
      "geometry_msgs/Vector3 noise_vector
geometry_msgs/Vector3 beta_vector

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

(setf (get ros_mscl::SetAccelBiasModelResponse :md5sum-) "f3cdd18c97add875be98974ab1d992b9")
(setf (get ros_mscl::SetAccelBiasModelResponse :datatype-) "ros_mscl/SetAccelBiasModelResponse")
(setf (get ros_mscl::SetAccelBiasModelResponse :definition-)
      "geometry_msgs/Vector3 noise_vector
geometry_msgs/Vector3 beta_vector

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



(provide :ros_mscl/SetAccelBiasModel "f3cdd18c97add875be98974ab1d992b9")


