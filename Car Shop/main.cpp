/*
Создайте приложение для работы автосалона.
Необходимо хранить информацию о продаваемых автомобилях (название, год выпуска, объем двигателя, цену).
Реализуйте интерфейс для добавления данных, удаления данных,
отображения данных, сортировке данных по различным
параметрам, поиску данных по различным параметрам.
*/

#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include "Vehicle.h"
#include "Database.h"

#define LINE cout << "=================\n\n"

using namespace std;

int main()
{
	Database db;
	db.Generate(10);
	db.ShowCars();

	LINE;

	db.SortCars([](Vehicle arg1, Vehicle arg2)
		{
			return arg1.GetYear() > arg2.GetYear();
		});
	db.ShowCars();

	return 0;
}