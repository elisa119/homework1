#include "ros/ros.h"
#include "std_msgs/String.h"
#include <string>
/*mostra messaggio intero a video*/
int main (int argc, char **argv){
   ros::init(argc, argv, "messaggio");
   ros::NodeHandle n;
   ros::Publisher nome_pub = n.advertise<std_msgs::String>("msg", 20);
   std::string nome[]={"elisa brunelli","gaia perani","denise amanzio","piero angela","nicolas graglia","eric bertolotti","alessandro agliardi"};
	std::string eta[]={"22","21","23","22","20","19","25"};
   std::string corso[]={"informatica","matematica","matematica","economia","biotecnologie","economia","scienze della comunicazione"};
   ros::Rate rate(1);
   while (ros::ok()){
      std_msgs::String msg1;
		for(int i=0;i<7;i++){
         msg1.data="nome= "+nome[i]+"; eta'= "+eta[i]+"; corso= "+corso[i]+";";
         ROS_INFO("%s", msg1.data.c_str());
         nome_pub.publish(msg1);
         ros::spinOnce();
   		rate.sleep();
      }
	}
   return 0;
}
