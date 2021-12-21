#include <iostream>
#include "StudentStudyGroup.h"

StudentStudyGroup::StudentStudyGroup()
{
	amountStudents = 2;
}

StudentStudyGroup::StudentStudyGroup(std::string group_, std::string faculty_, std::string specialty_, int amountStudents_, Student* students) : StudyGroup( group_, faculty_, specialty_)
{
	amountStudents = amountStudents_;
	this->students = students;
	std::cout << "Amount of students: " <<  amountStudents << std::endl;
}
StudentStudyGroup::StudentStudyGroup(int year_, std::string group_, std::string faculty_, std::string specialty_, int amountStudents_, Student* students) : StudyGroup(year_, group_, faculty_, specialty_)
{
	amountStudents = amountStudents_;
	this->students = students;
	std::cout << "Amount of students: " << amountStudents << std::endl;
}

float StudentStudyGroup::getAmountStudents()
{
	return amountStudents;
}
void StudentStudyGroup::setAmountStudents(float amountStudents_)
{
	amountStudents = amountStudents_;
}

void StudentStudyGroup::GetStudents(Student* students_)
{
	this->students = students_;
}

void StudentStudyGroup::SetStudents()
{
	for (int j = 0; j < amountStudents; j++)
	{
		std::cout << "Student " << j + 1 << ":\t";
		(students + j)->PrintNameSurname();
		std::cout << std::endl;
	}
}

//StudentStudyGroup::~StudentStudyGroup()
//{
//
//}


