#ifndef CLASS_H
#define CLASS_H
#include <string>

class business_trip {
private:
    std::string name, surname;
    int duration, amount, quantityPoints;
    int* arrayPoints;
public:
    business_trip();
    business_trip(const business_trip& other);
    std::string GetName();
    void SetName(std::string valueName);
    std::string GetSurname();
    void SetSurname(std::string valueSurname);
    int GetDuration();
    void SetDuration(int valueDuration);
    int GetAmount();
    void SetAmount(int valueAmount);
    int GetQuantity();
    void Print();
    void SetArray(int* arrayPoints);
    int GetArray();
    ~business_trip();
};

#endif