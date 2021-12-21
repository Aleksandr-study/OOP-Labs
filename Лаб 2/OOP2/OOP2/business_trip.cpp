#include "business_trip.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>

//Конструктори:
business_trip::business_trip()
{
    //конструктор за замовчуванням для оголошення масиву об'єктів
}
//Перевантаженяя конструкторів:
business_trip::business_trip(std::string valueName, std::string valueSurname, int valueDuration)
{
    //перевірка конкретності
    if (valueName == "-" || valueSurname == "-" || valueDuration < 0)
    {
        std::cout << "Invalid input!";
        exit(1);
    }
    else
    {
        name = valueName;
        surname = valueSurname;
        duration = valueDuration;
        amount = 11000;
    }
}
business_trip::business_trip(std::string valueName, std::string valueSurname, int valueDuration, int valueAmount)
{
    //перевірка конкретності
    if (valueName == "-" || valueSurname == "-" || valueDuration < 0 || valueAmount < 0)
    {
        std::cout << "Invalid input!";
        exit(1);
    }
    else
    {
        name = valueName;
        surname = valueSurname;
        duration = valueDuration;
        amount = valueAmount;
    }
}
std::string business_trip::GetName()
{
    return name;
}
void business_trip::SetName(std::string valueName)
{
    //перевірка конкретності
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
    //перевірка конкретності
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
    //перевірка конкретності
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
    //перевірка конкретності
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
void business_trip::Print()
{
    std::cout << name << "\t" << surname << "\t\t" << duration << "\t\t" << amount << std::endl;
}
//Деструктор:
business_trip::~business_trip()
{

}

