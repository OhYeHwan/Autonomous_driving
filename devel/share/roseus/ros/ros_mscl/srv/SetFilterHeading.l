;; Auto-generated. Do not edit!


(when (boundp 'ros_mscl::SetFilterHeading)
  (if (not (find-package "ROS_MSCL"))
    (make-package "ROS_MSCL"))
  (shadow 'SetFilterHeading (find-package "ROS_MSCL")))
(unless (find-package "ROS_MSCL::SETFILTERHEADING")
  (make-package "ROS_MSCL::SETFILTERHEADING"))
(unless (find-package "ROS_MSCL::SETFILTERHEADINGREQUEST")
  (make-package "ROS_MSCL::SETFILTERHEADINGREQUEST"))
(unless (find-package "ROS_MSCL::SETFILTERHEADINGRESPONSE")
  (make-package "ROS_MSCL::SETFILTERHEADINGRESPONSE"))

(in-package "ROS")





(defclass ros_mscl::SetFilterHeadingRequest
  :super ros::object
  :slots (_angle ))

(defmethod ros_mscl::SetFilterHeadingRequest
  (:init
   (&key
    ((:angle __angle) 0.0)
    )
   (send-super :init)
   (setq _angle (float __angle))
   self)
  (:angle
   (&optional __angle)
   (if __angle (setq _angle __angle)) _angle)
  (:serialization-length
   ()
   (+
    ;; float32 _angle
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _angle
       (sys::poke _angle (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _angle
     (setq _angle (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(defclass ros_mscl::SetFilterHeadingResponse
  :super ros::object
  :slots (_success ))

(defmethod ros_mscl::SetFilterHeadingResponse
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

(defclass ros_mscl::SetFilterHeading
  :super ros::object
  :slots ())

(setf (get ros_mscl::SetFilterHeading :md5sum-) "194939c001a63802dc4131cae92cda22")
(setf (get ros_mscl::SetFilterHeading :datatype-) "ros_mscl/SetFilterHeading")
(setf (get ros_mscl::SetFilterHeading :request) ros_mscl::SetFilterHeadingRequest)
(setf (get ros_mscl::SetFilterHeading :response) ros_mscl::SetFilterHeadingResponse)

(defmethod ros_mscl::SetFilterHeadingRequest
  (:response () (instance ros_mscl::SetFilterHeadingResponse :init)))

(setf (get ros_mscl::SetFilterHeadingRequest :md5sum-) "194939c001a63802dc4131cae92cda22")
(setf (get ros_mscl::SetFilterHeadingRequest :datatype-) "ros_mscl/SetFilterHeadingRequest")
(setf (get ros_mscl::SetFilterHeadingRequest :definition-)
      "float32 angle
---
bool success

")

(setf (get ros_mscl::SetFilterHeadingResponse :md5sum-) "194939c001a63802dc4131cae92cda22")
(setf (get ros_mscl::SetFilterHeadingResponse :datatype-) "ros_mscl/SetFilterHeadingResponse")
(setf (get ros_mscl::SetFilterHeadingResponse :definition-)
      "float32 angle
---
bool success

")



(provide :ros_mscl/SetFilterHeading "194939c001a63802dc4131cae92cda22")


