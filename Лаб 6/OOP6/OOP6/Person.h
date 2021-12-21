#ifndef PERSON_H
#define PERSON_H
#include "Date.h"

class Person : public virtual Date {
private:
    std::string name;
    std::string surname;
    bool sex; //стать - ч/ж або m/w
public:
    Person();
    Person(std::string name_, std::string surname_, bool sex_);
    Person(int day_, int month_, int year_, std::string name_, std::string surname_, bool sex_);
    Person(const Person& T);
    std::string getName();
    void setName(std::string name_);
    std::string getSurname();
    void setSurname(std::string surname_);
    std::string getSex();
    void setSex(bool sex_);
    void Show();
    ~Person();
};
#endif