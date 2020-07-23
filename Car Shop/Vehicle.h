#pragma once

#include <iostream>
#include <vector>

using namespace std;

class Vehicle
{
private:
	string brand;
	string model;
	int price;
	int year;
	int valueOfEngine;

public:
	Vehicle(string brand, string model, int price, int year, int valueOfEngine);
	Vehicle();
	void SetBrand(string brand);
	void SetModel(string model);
	void SetPrice(int price);
	void SetYear(int year);
	void SetValueOfEngine(int valueOfEngine);
	string GetBrand();
	string GetModel();
	int GetPrice();
	int GetYear();
	int GetValueOfEngine();
	virtual void Print();
};