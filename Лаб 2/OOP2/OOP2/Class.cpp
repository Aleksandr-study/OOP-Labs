#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include "Class.h"

//Конструктор:
Class::Class()
{
}
//Перевантаженяя:
void Class::values(std::string valueName, std::string valueSurname, int valueDuration)
{
    setlocale(LC_ALL, "ru");
    name = valueName;
    surname = valueSurname;
    duration = valueDuration;
    amount = 11000;
}
void Class::values(std::string valueName, std::string valueSurname, int valueDuration, int valueAmount)
{
    setlocale(LC_ALL, "ru");
    name = valueName;
    surname = valueSurname;
    duration = valueDuration;
    amount = valueAmount;
}
std::string Class::GetName()
{
    return name;

}
void Class::SetName(std::string valueName)
{
    name = valueName;
}
std::string Class::GetSurname()
{
    return surname;
}
void Class::SetSurname(std::string valueSurname)
{
    surname = valueSurname;
}
int Class::GetDuration()
{
    return duration;
}
void Class::SetDuration(int valueDuration)
{
    if (valueDuration > 2)
    {
        duration = valueDuration;
    }
    else
    {
        duration = 2;
    }
}
int Class::GetAmount()
{
    return amount;
}
void Class::SetAmount(int valueAmount)
{
    amount = valueAmount;
}
void Class::Table()
{
    std::cout << "Name:\tSurname:\tDuration:\tAmount:\n";
    std::cout << name << "\t" << surname << "\t\t" << duration << "\t\t" << amount << std::endl;
}
//Деструктор:
Class::~Class()
{

}

