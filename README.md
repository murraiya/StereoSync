# StereoSync
This provides exernal trigger time synchronization setting for two FLIR BFS cameras &amp; publishing ros image message

Based on https://github.com/ros-drivers/flir_camera_driver. Thanks a lot.

### For
Synchronizing stereo camera.

My setting is for GigE cam (Ethernet), so modify GigE to USB if you use USB model.

You need external trigger through GPIO line (I used arduino).
I set line 0, black line to be trigger source.
This is not an master slave setup. 
Two camera should be triggered by same voltage source.

### How to Use
1. git clone https://github.com/murraiya/StereoSync.git under your ros workspace's src.
2. catkin_make
3. roslaunch spinnaker_camera_driver stereo.launch

### If you are new to FLIR BFS camera
You need to install Spinview SDK first.
Confirm IP and port in ubuntu wired settings & check image in spinview before roslaunch.
