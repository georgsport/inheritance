#include <iostream>
#include <vector>


class Vehicle {
protected:
	int assemblyYear;
	int horsepowers;
	std::string model;
	std::string registrationNumber;
public:
	std::string getRegistation() { return this->registrationNumber; }
	int getAssemblyYear() { return this->assemblyYear; }
	int getEnginePower() { return horsepowers; }
	std::string getModel() { return this->model; }
	~Vehicle() {
		printf("Vehicle %s has been destroyed", this->registrationNumber);
	}

	Vehicle()
		: horsepowers{ 1 }, assemblyYear{ 2000 }, model{ "Москвич девятка" }, registrationNumber{ "12ААА345-00" } {}

	Vehicle(int _power, int _year, std::string _model, std::string _reg)
		: horsepowers{ _power }, assemblyYear{ _year }, model{ _model }, registrationNumber{ _reg } {}

	Vehicle(int _year, int _power, std::string _model) : model{ _model }, assemblyYear{ _year }, horsepowers{ _power } {}

	Vehicle(std::string _model) : model{ _model }, assemblyYear{ 2000 }, horsepowers{ 1 } {}
};