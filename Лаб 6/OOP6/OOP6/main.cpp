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
	//����������� ����������� ��� 1 ��������:
	Student student1(16, 2, 2002, 2019, "Sasha", "Cherkas", 1, "TR-92", "TEF", "122", 74);
	//����������� ���������:
	Student student2(student1);
	//������ ��������� ��� 2 ��������, �������������� �������:
	student2.setName("Danil");
	student2.setSurname("Urzhenko");
	student2.setDay(26);
	student2.setMonth(7);
	student2.setAverageSuccess(90);
	//������� �������� ��'��������:
	void (*pointer)(Student * g) = PrintInfo;
	Student* array[2] = { &student1, &student2 };//����� ��� ���������� ������ ����� ��� ��������
	Table(); //�������� �������
	for (int i = 0; i < 2; i++)
	{
		pointer(array[i]);
	}
	std::cout << "\n";
	Student students[2] = {student1, student2 };//��������� ����� ��������
	StudentStudyGroup TR(student1.getYear(), student1.getGroup(), student1.getFaculty(), student1.getSpecialty(), 2, students);
	//�������� ������ �����:
	std::cout << "Group " << TR.getGroup() << ":\n";
	//���� ��'��������:
	//�������� ��������� ����� ��������:
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