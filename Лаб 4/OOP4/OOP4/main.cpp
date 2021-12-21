#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include "business_trip.h"

using namespace std;

void Table();

int main()
{
	int i = 0;
	int q;
	std::string valueName, valueSurname;
	int valueDuration, valueAmount;
	business_trip member[2];
	int* array;
	//Зациклене меню для об'єктів:
	while (i < 2)
	{
		cout << "Member " << i + 1 << ":\n";
		cout << "Enter name:\n";
		cin >> valueName;
		member[i].SetName(valueName);

		cout << "Enter surname:\n";
		cin >> valueSurname;
		member[i].SetSurname(valueSurname);

		cout << "Enter duration (minimal amount of days - 2):\n";
		cin >> valueDuration;
		while (valueDuration < 2)
		{
			cout << "Enter duration (minimal amount of days - 2):\n";
			cin >> valueDuration;
		}
		member[i].SetDuration(valueDuration);

		cout << "Enter amount of money (minimal amount of money - 11000):\n";
		cin >> valueAmount;
		while (valueAmount < 11000)
		{
			std::cout << "Enter amount of money (minimal amount of money - 11000):\n";
			std::cin >> valueAmount;
		}
		member[i].SetAmount(valueAmount);

		std::cout << "Fill the array of points: \n";
		array = new int[member[i].GetQuantity()];
		for (int j = 0; j < member[i].GetQuantity(); j++)
		{//заповнення масиву
			cin >> array[j];
		}
		member[i].SetArray(array);
		cout << "0 - continue\n1 - change name\n2 - change surname\n3 - change duration\n4 - change amount of money\nanother number - exit\n";
		cin >> q;

		if (q == 1)
		{
			cout << "Enter name:\n";
			cin >> valueName;
			member[i].SetName(valueName);
		}
		else if (q == 2)
		{
			cout << "Enter surname:\n";
			cin >> valueSurname;
			member[i].SetSurname(valueSurname);
		}
		else if (q == 3)
		{
			cout << "Enter duration (minimal amount of days - 2):\n";
			cin >> valueDuration;
			member[i].SetDuration(valueDuration);
		}
		else if (q == 4)
		{
			cout << "Enter amount of money (minimal amount of money - 11000):\n";
			cin >> valueAmount;
			member[i].SetAmount(valueAmount);
		}
		else if (q != 0)
		{
			return 0;
		}
		i++;
	}
	i = 0;
	Table();
	while (i < 2)
	{
		std::cout << member[i].GetName() << "\t" << member[i].GetSurname() << "\t\t" << member[i].GetDuration() << "\t\t" << member[i].GetAmount() << "\t";
		//виводимо елементи масиву:
		member[i].Print();
		std::cout << std::endl;
		i++;
	}
	if (member[0] == member[1])
	{
		std::cout << std::endl << "Members are the same.\n";
	}
	else
	{
		std::cout << std::endl << "Members are not the same.\n";
	}

	if (member[0] > member[1])
	{
		std::cout << "Amount for member 1 is greater than amount for member 2.\n";
	}
	else
	{
		std::cout << "Amount for member 2 is greater than amount for member 1.\n";
	}
	std::cout << "Difference between amounts: " << member[0] - member[1] << std::endl;
	business_trip New;
	New = member[0] + 2000; // додамо першому члену 2000 грн на выдрядження
	std::cout << "Add 2000 to the amount of money of the first member:\n";
	Table();
	std::cout << New.GetName() << "\t" << New.GetSurname() << "\t\t" << New.GetDuration() << "\t\t" << New.GetAmount() << "\t";
	New.Print();
	std::cout << std::endl;
	delete[] array;
	return 0;
}

void Table()
{
	std::cout << "\nTable:\nName:\tSurname:\tDuration:\tAmount:\tPoints:\n";
}