#ifndef STUDYGROUP_H
#define STUDYGROUP_H
#include "Date.h"
//похідний клас : Навчальна Група(Шифр групи, факультет, спеціальність, Дата(1 вересня року вступу))

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