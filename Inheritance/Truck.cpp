#include <iostream>
#include <vector>
#include "Vehicle.h"

class Truck : Vehicle {
private:
	int mass;
	int wheelCount;
	int cargoCapacity;
public:
	int getMass() { return this->mass; }
	int getWheelCount() { return this->wheelCount; }
	int getCargoCapacity() { return this->cargoCapacity; }

	Truck() : Vehicle(), mass{ 1000 }, wheelCount{ 4 }, cargoCapacity{ 1000 } {}

	Truck(int _mass, int _wheelCount, int _cargoCap, std::string _model, int _year, int _power, std::string _reg)
		: Vehicle(_year, _power, _model, _reg), mass{ _mass }, wheelCount{ _wheelCount }, cargoCapacity{ _cargoCap } {}

	Truck(int _mass, int _wheelCount, int _cargoCap, std::string _model, int _year, int _power)
		: Vehicle(_year, _power, _model), mass{ _mass }, wheelCount{ _wheelCount }, cargoCapacity{ _cargoCap } {}
};