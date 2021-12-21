#include "business_trip.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>

//Конструктори:
business_trip::business_trip()
{
    std::cout << "The default constructor was called!\n";
    //конструктор за замовчуванням для оголошення масиву об'єктів
    name = "Ivan";
    surname = "Ivanov";
    duration = 2;
    amount = 11000;
    quantityPoints = 4;//розмір динаміного масиву за замовченням
    arrayPoints = new int[quantityPoints]; // дин.массив розміром quantityPoints
    for (int i = 0; i < quantityPoints; i++)
    {
        *(arrayPoints + i) = i + 1; // числа от 1 до quantityPoints
    }
}

//Конструктор копіювання:
business_trip::business_trip(const business_trip& obj)
{
    name = obj.name;
    surname = obj.surname;
    duration = obj.duration;
    amount = obj.amount;
    quantityPoints = obj.quantityPoints;
    arrayPoints = new int[quantityPoints]; // нужно создать новый массив, так как если удалится обьект, 
                           // созданный конструктором копирования,
                         // то удалится указатель на массив старого обьекта, что вызовет heap corrupted 
    for (int i = 0; i < quantityPoints; i++)
    {
        *(arrayPoints + i) = obj.arrayPoints[i]; // переносим все данные что были в старом массиве, в новый массив
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

//Деструктор:
business_trip::~business_trip()
{
    std::cout << "The destructor was called!\n";
    delete[] arrayPoints;
}