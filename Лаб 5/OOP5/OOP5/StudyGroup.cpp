#include<iostream>
#include "StudyGroup.h"
//похідний клас : Навчальна Група(Шифр групи, факультет, спеціальність, Дата(1 вересня року вступу))

StudyGroup::StudyGroup()
{
	group = "AA-91";
	faculty = "IPSA";
	specialty = "121";
}

StudyGroup::StudyGroup(std::string group_, std::string faculty_, std::string specialty_)
{
	group = group_;
	faculty = faculty_;
	specialty = specialty_;
}
StudyGroup::StudyGroup(int year__, std::string group_, std::string faculty_, std::string specialty_) : Date(year__)
{
	group = group_;
	faculty = faculty_;
	specialty = specialty_;
}

StudyGroup::StudyGroup(const StudyGroup& T)
{
	group = T.group;
	faculty = T.faculty;
	specialty = T.specialty;
}

std::string StudyGroup::getGroup()
{
	return group;
}
void StudyGroup::setGroup(std::string group_)
{
	group = group_;
}
std::string StudyGroup::getFaculty()
{
	return faculty;
}
void StudyGroup::setFaculty(std::string faculty_)
{
	faculty = faculty_;
}
std::string StudyGroup::getSpecialty()
{
	return specialty;
}
void StudyGroup::setSpecialty(std::string specialty_)
{
	specialty = specialty_;
}

void StudyGroup::PrintInfo()
{
	std::cout << getGroup() << "\t" << getFaculty() << "\t\t" << getSpecialty() << "\t\t";
	::Date::PrintInfoYear();
}

//StudyGroup::~StudyGroup()
//{
//
//}
