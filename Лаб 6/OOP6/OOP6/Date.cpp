#include <iostream>
#include "Date.h"
//базовий клас: Дата (Рік, Місяць, День); 

Date::Date()
{
	day = 1;
	month = 1;
	year = 2000;
	yearOfAdmission = 2005;
}
Date::Date(int day_, int month_, int year_)
{
	day = day_;
	month = month_;
	year = year_;
	yearOfAdmission = 2005;
}
Date::Date(int day_, int month_, int year_, int yearOfAdmission_)
{
	day = day_;
	month = month_;
	year = year_;
	yearOfAdmission = yearOfAdmission_;
}

Date::Date(const Date& T)
{
	day = T.day;
	month = T.month;
	year = T.year;
	yearOfAdmission = T.yearOfAdmission;
}

Date::Date(int year__)
{
	yearOfAdmission = year__;
}

int Date::getDay()
{
	return day;
}
void Date::setDay(int day_)
{
	day = day_;
}
int Date::getMonth()
{
	return month;
}
void Date::setMonth(int month_)
{
	month = month_;
}
int Date::getYear()
{
	return  year;
}
void Date::setYear(int year_)
{
	year = year_;
}
int Date::getYearOfAdmission()
{
	return  yearOfAdmission;
}
void Date::setYearOfAdmission(int yearOfAdmission_)
{
	yearOfAdmission = yearOfAdmission_;
}
void Date::Show()
{
	std::cout << day << "." << month << "." << year;
}

void Date::ShowYear()
{
	std::cout << 1 << "." << 9 << "." << yearOfAdmission;
}

Date::~Date()
{

}
