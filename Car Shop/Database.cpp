#include "Database.h"

void Database::Generate(int numOVeh)
{
	try
	{
		for (size_t i = 0; i < numOVeh; i++)
		{
			Vehicle car;
			vehicles.push_back(car);
		}
	}
	catch (const string err)
	{
		cout << "Error: " << err << endl;
	}
}

void Database::ShowCars()
{
	for (Vehicle vehicle : vehicles)
		vehicle.Print();
}

void Database::SortCars(function<bool(Vehicle, Vehicle)> func)
{
	for (int i = 0; i < vehicles.size() - 1; i++)
		for (int j = 0; j < vehicles.size() - i - 1; j++)
			if (func(vehicles[j], vehicles[j + 1]))
				swap(vehicles[j], vehicles[j + 1]);
}

Vehicle& Database::SearchCar(function<bool(Vehicle)> func)
{
	for (int i = 0; i < vehicles.size() - 1; i++)
		if (func(vehicles[i]))
			return vehicles[i];
}

void Database::Menu()
{
	char ch;
	cout << "1. Show cars\n";
	cout << "2. Sort cars\n";
	cout << "3. Search car\n";
	cout << "0. Exit\n";
	cin >> ch;

	switch (ch)
	{
		system("cls");
	case '1':
	{
		ShowCars();
		break;
	}
	case '2':
	{
		char key;
		cout << "1. Sort by price\n";
		cout << "2. Sort by year\n";
		cout << "3. Sort by value of engine\n";
		cout << "0. Exit\n";
		cin >> key;

		if (key == '1')
		{
			SortCars([](Vehicle arg1, Vehicle arg2)
				{
					return arg1.GetPrice() > arg2.GetPrice();
				});
		}
		else if (key == '2')
		{
			SortCars([](Vehicle arg1, Vehicle arg2)
				{
					return arg1.GetYear() > arg2.GetYear();
				});
		}
		else if (key == '3') {
			SortCars([](Vehicle arg1, Vehicle arg2)
				{
					return arg1.GetValueOfEngine() > arg2.GetValueOfEngine();
				});
		}
		break;
	}
	case '3':
	{
		char key;
		cout << "1. Find by price\n";
		cout << "2. Find by year\n";
		cout << "3. Find by value of engine\n";
		cout << "0. Exit\n";
		cin >> key;

		if (key == '1')
		{
			int price;
			cout << "Enter price: ";
			cin >> price;
			SearchCar([price](Vehicle vehicle)
				{
					return vehicle.GetPrice() == price;
				}).Print();
		}
		else if (key == '2')
		{
			int year;
			cout << "Enter year: ";
			cin >> year;
			SearchCar([year](Vehicle vehicle)
				{
					return vehicle.GetPrice() == year;
				}).Print();
		}
		else if (key == '3')
		{
			int value;
			cout << "Enter value of engine: ";
			cin >> value;
			SearchCar([value](Vehicle vehicle)
				{
					return vehicle.GetPrice() == value;
				}).Print();
		}
		break;
	}
	}
}