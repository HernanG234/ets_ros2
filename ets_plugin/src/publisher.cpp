#include "rclcpp/rclcpp.hpp"
#include "ets_msgs/msg/truck.hpp"

class Publisher : public rclcpp::Node
{
public:
	Publisher() : Node("ets_telemetry")
	{
		publisher_ = this->create_publisher<ets_msgs::msg::Truck>("truck");
	}

	void sendOdometry(float speed, float acc_x, float acc_y, float acc_z, float rpm, int gear, bool engine_running,
			  bool trailer_connected, double x, double y, double z, double heading, double pitch, double roll,
			  bool parking_brake, float air_pressure, float wear_engine, float wear_transmission, 
			  float battery_voltage, float wear_wheels, float cruise_control, float fuel,
			  float fuel_average_consumption, float wear_chassis, float cargo_mass)
	{
		auto message = ets_msgs::msg::Truck();
		message.speed = speed;
		message.acc_x = acc_x;
		message.acc_y = acc_y;
		message.acc_z = acc_z;
		message.rpm = rpm;
		message.gear = gear;
		message.engine_running = engine_running;
		message.trailer_connected = trailer_connected;
		message.x = x;
		message.y = y;
		message.z = z;
		message.heading = heading;
		message.pitch = pitch;
		message.roll = roll;
		message.parking_brake = parking_brake;
		message.air_pressure = air_pressure;
		message.wear_engine = wear_engine;
		message.wear_transmission = wear_transmission;
		message.battery_voltage = battery_voltage;
		message.wear_wheels = wear_wheels;
		message.cruise_control = cruise_control;
		message.fuel = fuel;
		message.fuel_average_consumption = fuel_average_consumption;
		message.wear_chassis = wear_chassis;
		message.cargo_mass = cargo_mass;
		
		publisher_->publish(message);
	}

private:
	rclcpp::Publisher<ets_msgs::msg::Truck>::SharedPtr publisher_;
};
