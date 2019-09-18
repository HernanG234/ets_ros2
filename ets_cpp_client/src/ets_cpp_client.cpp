#include "rclcpp/rclcpp.hpp"
#include "ets_msgs/msg/truck.hpp"

void callback(const ets_msgs::msg::Truck::SharedPtr msg)
{
  std::cout << "speed=" << msg->speed << " acc.x=" << msg->acc_x <<
	" acc.y=" << msg->acc_y << " acc.z=" << msg->acc_z << " rpm=" << msg->rpm <<
	" gear=" << msg->gear << " engine_running=" << msg->engine_running <<
	" trailer_connected=" << msg->trailer_connected << " position.x= " << msg->x <<
	" position.y=" << msg->y << " position.z=" << msg->z << " heading=" << msg->heading <<
	" pitch=" << msg->pitch << " roll=" << msg->roll << " parking_brake=" << msg->parking_brake << 
  " air_pressure=" << msg->air_pressure << " wear_engine=" << msg->wear_engine <<
  " wear_transmission=" << msg->wear_transmission << " battery_voltage=" << msg->battery_voltage <<
  " wear_wheels=" << msg->wear_wheels << " cruise_control=" << msg->cruise_control <<
  " fuel=" << msg->fuel << " fuel_average_consumption=" << msg->fuel_average_consumption <<
  " wear_chassis=" << msg->wear_chassis << " cargo_mass=" << msg->cargo_mass << std::endl << std::endl;
}

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("ets_client");

  auto sub = node->create_subscription<ets_msgs::msg::Truck>(
    "truck", callback, rmw_qos_profile_default);

  rclcpp::spin(node);

  return 0;
}
