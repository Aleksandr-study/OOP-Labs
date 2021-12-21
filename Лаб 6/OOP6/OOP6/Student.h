#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include "StudyGroup.h"
//похідний клас: Студент (Особа, Навчальна група, Середня успішність)

class Student : public Person, public StudyGroup {
protected:
    int averageSuccess;
public:
    Student();
    Student(std::string name_, std::string surname_, bool sex_, std::string group_, std::string faculty_, std::string specialty_, int averageSuccess_);
    Student(int day_, int month_, int year_, int yearOfAdmission_, std::string name_, std::string surname_, bool sex_, std::string group_, std::string faculty_, std::string specialty_, int averageSuccess_);
    Student(const Student& T, std::string name_, std::string surname_, bool sex_, std::string group_, std::string faculty_, std::string specialty_);
    int getAverageSuccess();
    void setAverageSuccess(int averageSuccess_);
    void Show();
    void ShowNameSurname();
    ~Student();
};
#endif
