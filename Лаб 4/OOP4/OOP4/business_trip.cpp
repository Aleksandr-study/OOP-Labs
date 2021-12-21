#include "business_trip.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cmath>

//������������:
business_trip::business_trip()
{
	//����������� �� ������������� ��� ���������� ������ ��'����
	name = "Ivan";
	surname = "Ivanov";
	duration = 2;
	amount = 11000;
	quantityPoints = 4;//����� ��������� ������ �� �����������
	arrayPoints = new int[quantityPoints]; // ���.������ ������� quantityPoints
	for (int i = 0; i < quantityPoints; i++)
	{
		*(arrayPoints + i) = i + 1; // ����� �� 1 �� quantityPoints
	}
}

//����������� ���������:
business_trip::business_trip(const business_trip& obj)
{
	this->name = obj.name;
	this->surname = obj.surname;
	this->duration = obj.duration;
	this->amount = obj.amount;
	this->quantityPoints = obj.quantityPoints;
	this->arrayPoints = new int[this->quantityPoints]; 
	for (int i = 0; i < this->quantityPoints; i++)
	{
		this->arrayPoints[i] = obj.arrayPoints[i]; // ��������� ��� ������ ��� ���� � ������ �������, � ����� ������
	}

}
std::string business_trip::GetName()
{
	return name;
}
void business_trip::SetName(std::string valueName)
{
	//�������� �����������
	if (valueName == "-")
	{
		std::cout << "Invalid input!";
		exit(1);
	}
	else
	{
		name = valueName;
	}
}
std::string business_trip::GetSurname()
{
	return surname;
}
void business_trip::SetSurname(std::string valueSurname)
{
	//�������� �����������
	if (valueSurname == "-")
	{
		std::cout << "Invalid input!";
		exit(1);
	}
	else
	{
		surname = valueSurname;
	}
}
int business_trip::GetDuration()
{
	return duration;
}
void business_trip::SetDuration(int valueDuration)
{
	//�������� �����������
	if (valueDuration < 2)
	{
		std::cout << "Invalid input!";
		exit(1);
	}
	else
	{
		duration = valueDuration;
	}
}
int business_trip::GetAmount()
{
	return amount;
}
void business_trip::SetAmount(int valueAmount)
{
	//�������� �����������
	if (valueAmount < 0)
	{
		std::cout << "Invalid input!";
		exit(1);
	}
	else
	{
		amount = valueAmount;
	}
}
int business_trip::GetQuantity()
{
	return quantityPoints;
}

void business_trip::SetArray(int* arrayPoints)
{
	this->arrayPoints = arrayPoints;
}

void business_trip::Print()
{
	for (int i = 0; i < quantityPoints; i++)
	{
		std::cout << arrayPoints[i] << "_";
	}
}

business_trip business_trip::operator+(int newAmount)
{
	business_trip newMember(*this); // ������� ����� ������� �������
	newMember.amount += newAmount; // �������� ����� ������
	return newMember; // ��������� �������� ������
}

int operator-(const business_trip& c1, const business_trip& c2)
{
	int difference = abs(c1.amount - c2.amount);
	return difference;
}

bool operator== (const business_trip& c1, const business_trip& c2)
{
	return (c1.name == c2.name &&
		c1.surname == c2.surname &&
		c1.duration == c2.duration &&
		c1.amount == c2.amount);
}

bool operator> (const business_trip& c1, const business_trip& c2)
{
	return c1.amount > c2.amount;
}

//����������:
business_trip::~business_trip()
{
	if (!arrayPoints)
	{
		delete[] arrayPoints;
	}
}