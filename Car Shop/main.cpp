/*
�������� ���������� ��� ������ ����������.
���������� ������� ���������� � ����������� ����������� (��������, ��� �������, ����� ���������, ����).
���������� ��������� ��� ���������� ������, �������� ������,
����������� ������, ���������� ������ �� ���������
����������, ������ ������ �� ��������� ����������.
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