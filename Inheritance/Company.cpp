#include <string>
#include <vector>
#include "Company.h"
#include "Employee.h"
#include "Vehicle.h"

class Company {
private:
	std::vector<Employee> employees;
	std::vector<Vehicle> vehicles;
	std::string name;
	Employee director;
	int capital;
public:
	void employPerson(Employee employee) {
		this->employees.push_back(employee);
	}
	std::vector<Employee> getEmployees() { return this->employees; }

	void hireDirector(Employee newDirector) { this->director = newDirector; }
	Employee getDirector() { return this->director; }

	void hireVehicle(Vehicle vehicle) { this->vehicles.push_back(vehicle); }

	void setName(std::string name) { this->name = name; }
	std::string getName() { return this->name; }

	void setCapital(int capital) { this->capital = capital; }
	int getCapital() { return this->capital; }
	~Company() {
		printf("Company %s has been dissolved", this->name);
	}
	Company()
		: director{ Employee() }, capital{ 0 }, name{ "Шаблон компании" }, employees{ std::vector<Employee>() }, vehicles{ std::vector<Vehicle>() } {};
	Company(Employee _director, int _startCapital, std::string _name, std::vector<Employee> _employees, std::vector<Vehicle> _vehicles)
		:director{ _director }, capital{ _startCapital }, name{ _name }, employees{ _employees }, vehicles{ _vehicles } {}
};