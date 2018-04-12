#include "ros/ros.h"
#include "std_msgs/String.h"
#include <string>
#include <iostream>
std::string s;
void cCallback(const std_msgs::String::ConstPtr& msg){
	std::string delimiter,str=msg->data.c_str(),token;
	if(s=="a"){//tutto
		ROS_INFO("%s", msg->data.c_str());
	}else if(s=="n"){//nome
		delimiter = "; e";
		token = str.substr(0, str.find(delimiter));
		std::cout<<token+"\n";
	}else if(s=="e"){//eta'
		delimiter = "; c";
		std::string delimiter2 = "; ";
		token = str.substr(str.find(delimiter2),str.size()-1);
		token=token.substr(2,token.find(delimiter));
		std::cout<<token+"\n";
	}else if(s=="c"){//corso
		delimiter = "corso";
		token = str.substr(str.find(delimiter),str.size()-1);
		std::cout<<token+"\n";
	}else if(s=="q"){//esci
		ros::shutdown();
		std::cout<<"Ciao Ciao!\n";
	}
}
void chatterCallback(const std_msgs::String::ConstPtr& msg){
	ROS_INFO("Hai scelto-> %s", msg->data.c_str());
	s=msg->data.c_str();
}

int main(int argc, char **argv){
  ros::init(argc, argv, "msg_scelto");
  ros::NodeHandle n;
  ros::Subscriber sub1 = n.subscribe("scelta", 20, chatterCallback);
  ros::Subscriber sub2 = n.subscribe("msg", 20, cCallback);

  ros::spin();
  return 0;
}
