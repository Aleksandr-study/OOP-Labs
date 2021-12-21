#include <iostream>
#include "Student.h"
//похідний клас: Студент (Особа, Навчальна група, Середня успішність)

Student::Student()
{
	averageSuccess = 60;
}

Student::Student(std::string name_, std::string surname_, bool sex_, std::string group_, std::string faculty_, std::string specialty_, int averageSuccess_) : Person  (name_, surname_, sex_), StudyGroup(group_, faculty_, specialty_)
{
	averageSuccess = averageSuccess_;
}
Student::Student(int day_, int month_, int year_, int yearOfAdmission_, std::string name_, std::string surname_, bool sex_, std::string group_, std::string faculty_, std::string specialty_, int averageSuccess_) : Date(day_, month_, year_, yearOfAdmission_), Person(name_, surname_, sex_), StudyGroup(group_, faculty_, specialty_)
{
	averageSuccess = averageSuccess_;
}

Student::Student(const Student& T, std::string name_, std::string surname_, bool sex_, std::string group_, std::string faculty_, std::string specialty_) : Person(name_, surname_, sex_), StudyGroup(group_, faculty_, specialty_)
{
	averageSuccess = T.averageSuccess;
}

int Student::getAverageSuccess()
{
	return averageSuccess;
}
void Student::setAverageSuccess(int averageSuccess_)
{
	averageSuccess = averageSuccess_;
}

void Student::PrintInfo()
{
	::Person::PrintInfo();
	std::cout << "\t";
	::StudyGroup::PrintInfo();
	std::cout << "\t\t" << Student::getAverageSuccess();
	std::cout << std::endl;
}

void Student::PrintNameSurname()
{
	std::cout << Person::getName() << " " << Person::getSurname();

}

//Student::~Student()
//{
//
//}
