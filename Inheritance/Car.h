#pragma once
#include <iostream>
#include <vector>
#include "Vehicle.h"

class Car : Vehicle {
private:
	std::string transmission;
	int seatCount;
	std::string layout;
public:
	std::string getTransmission() { return this->transmission; }
	int getSeatCount() { return this->seatCount; }
	std::string getLayout() { return this->layout; }

	Car() : Vehicle(), seatCount{ 4 }, layout{ "FF" } {}

	Car(int _seatCount, std::string _layout, std::string _model, int _year, int _power, std::string _reg)
		: Vehicle(_year, _power, _model, _reg), seatCount{ _seatCount }, layout{ _layout } {}

	Car(std::string _tr, int _seatCount, std::string _layout, std::string _model, int _year, int _power, std::string _reg)
		: Vehicle(_year, _power, _model, _reg), seatCount{ _seatCount }, layout{ _layout }, transmission{ _tr } {}
};