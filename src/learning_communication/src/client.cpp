
#include <cstdlib>
#include "ros/ros.h"
#include "learning_communication/AddTwoints.h"

int main(int argc, char **argv) {

	 // ROS initalization
	ros::init(argc, argv, "add_two_ints_client");

	if(argc != 3) {
		ROS_INFO("usage: add_two_ints_client X Y");
		return 1;
	}

	// ROS NodeHandle
	ros::NodeHandle n;

	// 创建一个client，请求add_two_int service, service的消息类型是learning_communication::AddTwoints
	ros::ServiceClient client = n.serviceClient<learning_communication::AddTwoints>("add_two_ints");

	learning_communication::AddTwoints srv;
	srv.request.a = atoll(argv[1]);
	srv.request.b = atoll(argv[2]);

	// 发布service请求，等待加法运算的应答结果
	if(client.call(srv)) {
		ROS_INFO("Sum: %ld", (long int)srv.response.sum);
	}
	else {
		ROS_ERROR("failed to call service add_two_ints");
		return 1;
	}
	return 0;
}