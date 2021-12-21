#include "business_trip.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>

//������������:
business_trip::business_trip()
{
    std::cout << "The default constructor was called!\n";
    //����������� �� ������������� ��� ���������� ������ ��'����
    name = "---";
    surname = "---";
    duration = 0;
    amount = 0;
    quantityPoints = 4;//����� ��������� ������ �� �����������
    arrayPoints = new int[quantityPoints]; // ������� ���.������ �������� quantityPoints
    for (int i = 0; i < quantityPoints; i++)
    {
        *(arrayPoints + i) = i + 1; // �������� ���� ����� �� 1 �� quantityPoints, ����� ��� �� �������� �����
    }
}

//����������� ���������:
business_trip::business_trip(const business_trip& obj)
{
    name = obj.name;
    surname = obj.surname;
    duration = obj.duration;
    amount = obj.amount;
    quantityPoints = obj.quantityPoints;
    arrayPoints = new int[quantityPoints]; // ����� ������� ����� ������, ��� ��� ���� �������� ������, 
                           // ��������� ������������� �����������,
                         // �� �������� ��������� �� ������ ������� �������, ��� ������� heap corrupted 
    for (int i = 0; i < quantityPoints; i++)
    {
        *(arrayPoints + i) = obj.arrayPoints[i]; // ��������� ��� ������ ��� ���� � ������ �������, � ����� ������
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
//void business_trip::SetQuantity(int valueQuantity)
//{
//  //�������� �����������
//  if (valueQuantity < 0)
//  {
//    std::cout << "Invalid input!";
//    exit(1);
//  }
//  else
//  {
//    quantityPoints = valueQuantity;
//    this->arrayPoints = new int(valueQuantity);
//    for (int i = 1; i <= valueQuantity; i++)
//    {
//      arrayPoints[i] = i;
//    }
//  }
//}
void business_trip::Print()
{
    std::cout << name << "\t" << surname << "\t\t" << duration << "\t\t" << amount << "\t";
    for (int i = 0; i < quantityPoints; i++)
    {
        std::cout << arrayPoints[i] << "_";
    }
    std::cout << std::endl;
}

int business_trip::GetArray()
{
    for (int i = 0; i < quantityPoints; i++)
    {
        return  arrayPoints[i];
        std::cout << "_";
    }
}

void business_trip::SetArray(int* arrayPoints)
{
    this->arrayPoints = arrayPoints;
}

//����������:
business_trip::~business_trip()
{
    std::cout << "The destructor was called!\n";
    delete[] arrayPoints;
}