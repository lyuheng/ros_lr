
#include "ros/ros.h"
#include "std_msgs/String.h"

void chatterCallback(const std_msgs::String::ConstPtr& msg) {
	ROS_INFO("I heard: [%s]", msg->data.c_str());
}

int main(int argc, char **argv) {

	// 初始化ROS节点
	ros::init(argc, argv, "listener");

	// 创建节点句柄
	ros::NodeHandle n;

	// 创建Sub，订阅名为chatter的topic，注册回调函数
	ros::Subscriber sub = n.subscribe("chatter", 1000, chatterCallback);

	// 循环等待回调函数s
	ros::spin();

	return 0;
}