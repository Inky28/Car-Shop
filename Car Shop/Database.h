#pragma once

#include <iostream>
#include <vector>
#include <functional>
#include "Vehicle.h"

using namespace std;

class Database
{
private:
	vector<Vehicle> vehicles;

public:
	void Generate(int numOVeh);
	void ShowCars();
	void SortCars(function<bool(Vehicle, Vehicle)> func);
	Vehicle& SearchCar(function<bool(Vehicle)> func);
	void Menu();
};