;; Auto-generated. Do not edit!


(when (boundp 'ros_mscl::SetEstimationControlFlags)
  (if (not (find-package "ROS_MSCL"))
    (make-package "ROS_MSCL"))
  (shadow 'SetEstimationControlFlags (find-package "ROS_MSCL")))
(unless (find-package "ROS_MSCL::SETESTIMATIONCONTROLFLAGS")
  (make-package "ROS_MSCL::SETESTIMATIONCONTROLFLAGS"))
(unless (find-package "ROS_MSCL::SETESTIMATIONCONTROLFLAGSREQUEST")
  (make-package "ROS_MSCL::SETESTIMATIONCONTROLFLAGSREQUEST"))
(unless (find-package "ROS_MSCL::SETESTIMATIONCONTROLFLAGSRESPONSE")
  (make-package "ROS_MSCL::SETESTIMATIONCONTROLFLAGSRESPONSE"))

(in-package "ROS")





(intern "*GYRO_BIAS_ESTIMATION*" (find-package "ROS_MSCL::SETESTIMATIONCONTROLFLAGSREQUEST"))
(shadow '*GYRO_BIAS_ESTIMATION* (find-package "ROS_MSCL::SETESTIMATIONCONTROLFLAGSREQUEST"))
(defconstant ros_mscl::SetEstimationControlFlagsRequest::*GYRO_BIAS_ESTIMATION* 1)
(intern "*HARD_IRON_AUTO_CALIBRATION*" (find-package "ROS_MSCL::SETESTIMATIONCONTROLFLAGSREQUEST"))
(shadow '*HARD_IRON_AUTO_CALIBRATION* (find-package "ROS_MSCL::SETESTIMATIONCONTROLFLAGSREQUEST"))
(defconstant ros_mscl::SetEstimationControlFlagsRequest::*HARD_IRON_AUTO_CALIBRATION* 32)
(intern "*SOFT_IRON_AUTO_CALIBRATION*" (find-package "ROS_MSCL::SETESTIMATIONCONTROLFLAGSREQUEST"))
(shadow '*SOFT_IRON_AUTO_CALIBRATION* (find-package "ROS_MSCL::SETESTIMATIONCONTROLFLAGSREQUEST"))
(defconstant ros_mscl::SetEstimationControlFlagsRequest::*SOFT_IRON_AUTO_CALIBRATION* 64)
(defclass ros_mscl::SetEstimationControlFlagsRequest
  :super ros::object
  :slots (_flag ))

(defmethod ros_mscl::SetEstimationControlFlagsRequest
  (:init
   (&key
    ((:flag __flag) 0)
    )
   (send-super :init)
   (setq _flag (round __flag))
   self)
  (:flag
   (&optional __flag)
   (if __flag (setq _flag __flag)) _flag)
  (:serialization-length
   ()
   (+
    ;; int8 _flag
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int8 _flag
       (write-byte _flag s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int8 _flag
     (setq _flag (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _flag 127) (setq _flag (- _flag 256)))
   ;;
   self)
  )

(defclass ros_mscl::SetEstimationControlFlagsResponse
  :super ros::object
  :slots (_success ))

(defmethod ros_mscl::SetEstimationControlFlagsResponse
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

(defclass ros_mscl::SetEstimationControlFlags
  :super ros::object
  :slots ())

(setf (get ros_mscl::SetEstimationControlFlags :md5sum-) "692fa639072887f90a3c63c3c00dc9f6")
(setf (get ros_mscl::SetEstimationControlFlags :datatype-) "ros_mscl/SetEstimationControlFlags")
(setf (get ros_mscl::SetEstimationControlFlags :request) ros_mscl::SetEstimationControlFlagsRequest)
(setf (get ros_mscl::SetEstimationControlFlags :response) ros_mscl::SetEstimationControlFlagsResponse)

(defmethod ros_mscl::SetEstimationControlFlagsRequest
  (:response () (instance ros_mscl::SetEstimationControlFlagsResponse :init)))

(setf (get ros_mscl::SetEstimationControlFlagsRequest :md5sum-) "692fa639072887f90a3c63c3c00dc9f6")
(setf (get ros_mscl::SetEstimationControlFlagsRequest :datatype-) "ros_mscl/SetEstimationControlFlagsRequest")
(setf (get ros_mscl::SetEstimationControlFlagsRequest :definition-)
      "int8 GYRO_BIAS_ESTIMATION=1
int8 HARD_IRON_AUTO_CALIBRATION=32
int8 SOFT_IRON_AUTO_CALIBRATION=64
int8 flag
---
bool success

")

(setf (get ros_mscl::SetEstimationControlFlagsResponse :md5sum-) "692fa639072887f90a3c63c3c00dc9f6")
(setf (get ros_mscl::SetEstimationControlFlagsResponse :datatype-) "ros_mscl/SetEstimationControlFlagsResponse")
(setf (get ros_mscl::SetEstimationControlFlagsResponse :definition-)
      "int8 GYRO_BIAS_ESTIMATION=1
int8 HARD_IRON_AUTO_CALIBRATION=32
int8 SOFT_IRON_AUTO_CALIBRATION=64
int8 flag
---
bool success

")



(provide :ros_mscl/SetEstimationControlFlags "692fa639072887f90a3c63c3c00dc9f6")


