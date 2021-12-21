#include <iostream>
#include "Date.h"
#include "Person.h"
#include "StudyGroup.h"
#include "Student.h"
#include "StudentStudyGroup.h"

using namespace std;

void Table();
void PrintInfo(Student* g);

int main()
{
	//Використуємо конструктор для 1 студента:
	Student student1(16, 2, 2002, 2019, "Sasha", "Cherkas", 1, "TR-92", "TEF", "122", 74);
	//Використуємо копіювання:
	Student student2(student1);
	//Змінимо параметри для 2 студента, використовуючи сеттери:
	student2.setName("Danil");
	student2.setSurname("Urzhenko");
	student2.setDay(26);
	student2.setMonth(7);
	student2.setAverageSuccess(90);
	//приклад пізднього зв'язування:
	void (*pointer)(Student * g) = PrintInfo;
	Student* array[2] = { &student1, &student2 };//масив для подальшого виводу даних про студентів
	Table(); //виводимо таблицю
	for (int i = 0; i < 2; i++)
	{
		pointer(array[i]);
	}
	std::cout << "\n";
	Student students[2] = {student1, student2 };//динамічний масив студентів
	StudentStudyGroup TR(student1.getYear(), student1.getGroup(), student1.getFaculty(), student1.getSpecialty(), 2, students);
	//Виводимо список групи:
	std::cout << "Group " << TR.getGroup() << ":\n";
	//раннє зв'язування:
	//виводимо динамічний масив студентів:
	TR.Show();
	return 0;
}

void Table()
{
	std::cout << "Table:\nName:\tSurname:\tSex:\tBirthday:\tGroup:\tFaculty:\tSpecialty:\tDay of admission:\tAverage mark:\n";
}

void PrintInfo(Student* g)
{
	g->Show();
}