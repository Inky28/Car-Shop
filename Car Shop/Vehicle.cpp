#include "Vehicle.h"

Vehicle::Vehicle(string brand, string model, int price, int year, int valueOfEngine)
{
	SetBrand(brand);
	SetModel(model);
	SetPrice(price);
	SetYear(year);
	SetValueOfEngine(valueOfEngine);
}

Vehicle::Vehicle()
{
	vector<string> brands =
	{
		"Audi",
		"BMW",
		"Alfa Romeo",
		"Aston Martin",
		"Honda",
		"Mazda",
		"Kia",
		"Volvo",
		"Peugeot",
		"Lexus"
	};

	SetBrand(brands[rand() % brands.size()]);

	string model;
	model += (rand() % ('Z' - 'A') + 'A');
	SetModel(model);

	SetPrice(rand() % 1000 + 2000);

	SetYear(rand() % 50 + 1970);

	SetValueOfEngine(rand() % 10);
}

void Vehicle::SetBrand(string brand)
{
	try
	{
		if (!brand.empty())
			this->brand = brand;
	}
	catch (const string err)
	{
		cout << "Error: " << err << endl;
	}
}

void Vehicle::SetModel(string model)
{
	try
	{
		if (!model.empty())
			this->model = model;
	}
	catch (const string err)
	{
		cout << "Error: " << err << endl;
	}
}

void Vehicle::SetPrice(int price)
{
	try
	{
		if (price > 0)
			this->price = price;
	}
	catch (const string err)
	{
		cout << "Error: " << err << endl;
	}
}

void Vehicle::SetYear(int year)
{
	try
	{
		if (year > 0)
			this->year = year;
	}
	catch (const string err)
	{
		cout << "Error: " << err << endl;
	}
}

void Vehicle::SetValueOfEngine(int valueOfEngine)
{
	try
	{
		if (valueOfEngine > 0)
			this->valueOfEngine = valueOfEngine;
	}
	catch (const string err)
	{
		cout << "Error: " << err << endl;
	}
}

string Vehicle::GetBrand()
{
	return brand;
}

string Vehicle::GetModel()
{
	return model;
}

int Vehicle::GetPrice()
{
	return price;
}

int Vehicle::GetYear()
{
	return year;
}

int Vehicle::GetValueOfEngine()
{
	return valueOfEngine;
}

void Vehicle::Print()
{
	cout << "Brand: " << brand << endl;
	cout << "Model: " << model << endl;
	cout << "Price: " << price << endl;
	cout << "Year: " << year << endl;
	cout << "Value of engine: " << valueOfEngine << "\n\n";
}