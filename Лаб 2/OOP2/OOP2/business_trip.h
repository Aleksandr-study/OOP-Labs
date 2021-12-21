#ifndef CLASS_H
#define CLASS_H
#include <string>

class business_trip {
private:
	std::string name, surname;
	int duration, amount;
public:
	business_trip();
	business_trip(std::string valueName, std::string valueSurname, int valueDuration);
	business_trip(std::string valueName, std::string valueSurname, int valueDuration, int valueAmount);
	std::string GetName();
	void SetName(std::string valueName);
	std::string GetSurname();
	void SetSurname(std::string valueSurname);
	int GetDuration();
	void SetDuration(int valueDuration);
	int GetAmount();
	void SetAmount(int valueAmount);
	void Print();
	~business_trip();
};

#endif