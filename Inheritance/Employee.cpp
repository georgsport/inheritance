#include <iostream>
#include <vector>
#include "Vehicle.h"

class Employee {
private:
	std::string position;
	std::string name;
	std::vector<Vehicle> vehicles;
	int salary;
public:
	void drive(Vehicle vehicle) {
		this->vehicles.push_back(vehicle);
		printf("vroom vroom\nRegistration number: %s\n", vehicle.getRegistation());
	}
	std::vector<Vehicle> getVehicles() { return this->vehicles; }

	void setName(std::string name) { this->name = name; }
	std::string getName() { return this->name; }

	void setPosition(std::string position) { this->position = position; }
	std::string getPosition() { return this->position; }

	void setSalary(int salary) { this->salary = salary; }
	int getSalary() { return this->salary; }

	Employee() {
		this->name = "aboba";
		this->position = "bezrabotniy";
		this->vehicles = std::vector<Vehicle>{};
		this->salary = 0;
	}

	Employee(std::string _name, std::string _position, int _salary, std::vector<Vehicle> _vehicles)
		: name{ _name }, position{ _position }, salary{ _salary }, vehicles{ _vehicles } {}
};