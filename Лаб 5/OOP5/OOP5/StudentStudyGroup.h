#ifndef STUDENTSTUDYGROUP_H
#define STUDENTSTUDYGROUP_H
#include "StudyGroup.h"
#include "Student.h"
//�������� ����: ��������� ����� �������� (��������� �����, ������� �������� � ����, ������ ��������)

class StudentStudyGroup : public StudyGroup {
protected:
    int amountStudents = 0;
    Student* students;//��������� ����� ��������
public:
    StudentStudyGroup();
    StudentStudyGroup(std::string group_, std::string faculty_, std::string specialty_, int amountStudents_ , Student* students);
    StudentStudyGroup(int year_, std::string group_, std::string faculty_, std::string specialty_, int amountStudents_, Student* students);
    float getAmountStudents();
    void setAmountStudents(float amountStudents_);
    void GetStudents(Student* students);
    void SetStudents();
    //~StudentStudyGroup();
};
#endif