#include "ros/ros.h"
#include "std_msgs/String.h"
#include <iostream>
/*mostra il menu a video*/
int main (int argc, char **argv){
   ros::init(argc, argv, "menu");
   ros::NodeHandle n;
   ros::Publisher command_pub = n.advertise<std_msgs::String>("scelta", 20);
   while (ros::ok()){
      std_msgs::String msg;
      std::cout<<"Menu, digita:\n"<<"'a' Per stampare tutto il messaggio;\n"<<"'n' Per vedere il nome;\n"<<"'e' Per vedere l'eta';\n"<<"'c' Per vedere il corso di laurea;\n"<<"'q' Per uscire;\n";
      std::cin>>msg.data;
      command_pub.publish(msg);
      ros::spinOnce();
      if (msg.data=="q")
	 ros::shutdown();
   }
   return 0;
}
