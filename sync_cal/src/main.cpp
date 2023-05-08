#include <iostream>
#include <ros/ros.h>


void ImgSubCallback(const sensor_msgs::Image raw_image){
    cout<<"Subscribed"<<'\n';

}


int main(int argc, char** argv){
    ros::init(argc, argv, "time_sync_node");
    ros::NodeHandle nh;

    ros::Subscriber left_image=nh.subscribe<sensor_msgs::Image>("/left/raw_image", 10, ImgSubCallback);
    ros::Subscriber right_image=nh.subscribe<sensor_msgs::Image>("/right/raw_image", 10, ImgSubCallback);
    
    if(ros::ok()) ros::spin();



    return 0;
}
