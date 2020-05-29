;; Auto-generated. Do not edit!


(when (boundp 'my_pkg::my_msg)
  (if (not (find-package "MY_PKG"))
    (make-package "MY_PKG"))
  (shadow 'my_msg (find-package "MY_PKG")))
(unless (find-package "MY_PKG::MY_MSG")
  (make-package "MY_PKG::MY_MSG"))

(in-package "ROS")
;;//! \htmlinclude my_msg.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass my_pkg::my_msg
  :super ros::object
  :slots (_points _another_field _obstacle ))

(defmethod my_pkg::my_msg
  (:init
   (&key
    ((:points __points) (let (r) (dotimes (i 0) (push (instance geometry_msgs::Point :init) r)) r))
    ((:another_field __another_field) 0)
    ((:obstacle __obstacle) (let (r) (dotimes (i 0) (push nil r)) r))
    )
   (send-super :init)
   (setq _points __points)
   (setq _another_field (round __another_field))
   (setq _obstacle __obstacle)
   self)
  (:points
   (&rest __points)
   (if (keywordp (car __points))
       (send* _points __points)
     (progn
       (if __points (setq _points (car __points)))
       _points)))
  (:another_field
   (&optional __another_field)
   (if __another_field (setq _another_field __another_field)) _another_field)
  (:obstacle
   (&optional __obstacle)
   (if __obstacle (setq _obstacle __obstacle)) _obstacle)
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/Point[] _points
    (apply #'+ (send-all _points :serialization-length)) 4
    ;; uint8 _another_field
    1
    ;; bool[] _obstacle
    (* 1    (length _obstacle)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/Point[] _points
     (write-long (length _points) s)
     (dolist (elem _points)
       (send elem :serialize s)
       )
     ;; uint8 _another_field
       (write-byte _another_field s)
     ;; bool[] _obstacle
     (write-long (length _obstacle) s)
     (dotimes (i (length _obstacle))
       (if (elt _obstacle i) (write-byte -1 s) (write-byte 0 s))
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/Point[] _points
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _points (let (r) (dotimes (i n) (push (instance geometry_msgs::Point :init) r)) r))
     (dolist (elem- _points)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;; uint8 _another_field
     (setq _another_field (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; bool[] _obstacle
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _obstacle (make-list n))
     (dotimes (i n)
     (setf (elt _obstacle i) (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
     ))
   ;;
   self)
  )

(setf (get my_pkg::my_msg :md5sum-) "f737435e2eebbd28ee7cd6144cb0c7b7")
(setf (get my_pkg::my_msg :datatype-) "my_pkg/my_msg")
(setf (get my_pkg::my_msg :definition-)
      "geometry_msgs/Point[] points
uint8 another_field
bool[] obstacle

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

")



(provide :my_pkg/my_msg "f737435e2eebbd28ee7cd6144cb0c7b7")


