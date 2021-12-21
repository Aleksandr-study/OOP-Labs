#ifndef STUDYGROUP_H
#define STUDYGROUP_H
#include "Date.h"
//�������� ���� : ��������� �����(���� �����, ���������, ������������, ����(1 ������� ���� ������))

class StudyGroup : public virtual Date {
protected:
    std::string group;
    std::string faculty;
    std::string specialty;
public:
    StudyGroup();
    StudyGroup(std::string group_, std::string faculty_, std::string specialty_);
    StudyGroup(int year__, std::string group_, std::string faculty_, std::string specialty_);
    StudyGroup(const StudyGroup& T);
    std::string getGroup();
    void setGroup(std::string group_);
    std::string getFaculty();
    void setFaculty(std::string faculty_);
    std::string getSpecialty();
    void setSpecialty(std::string specialty_);
    void PrintInfo();
    //~StudyGroup();
};
#endif