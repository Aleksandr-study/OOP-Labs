#include <iostream>
#include <cmath>
#include "Person.h"
//похідний клас: Особа (Прізвище, Ім’я, Дата (народження), Стать);

Person::Person()
{
	name = '-';
	surname = '-';
	sex = 1;
}

Person::Person(std::string name_, std::string surname_, bool sex_)
{
	name = name_;
	surname = surname_;
	sex = sex_;
}
Person::Person(int day_, int month_, int year_, std::string name_, std::string surname_, bool sex_) : Date(day_, month_, year_)
{
	name = name_;
	surname = surname_;
	sex = sex_;
}

Person::Person(const Person& T)
{
	name = T.name;
	surname = T.surname;
	sex = T.sex;
}

std::string Person::getName()
{
	return name;
}
void Person::setName(std::string name_)
{
	name = name_;
}
std::string Person::getSurname()
{
	return surname;
}
void Person::setSurname(std::string surname_)
{
	surname = surname_;
}
std::string Person::getSex()
{
	if (sex)
	{
		return "m";
	}
	else
	{
		return "w";
	}
}
void Person::setSex(bool sex_)
{
	sex = sex_;
}

void Person::Show()
{
	std::cout << getName() << "\t" << getSurname();
	if (getSurname().length() < 8)
	{
		std::cout << "\t";
	}
	std::cout << "\t" << getSex() << "\t";
	Date::Show();
}

Person::~Person()
{

}
