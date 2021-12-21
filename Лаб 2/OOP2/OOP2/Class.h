#ifndef CLASS_H
#define CLASS_H
#include <string>

class Class {
private:
	std::string name, surname;
	int duration, amount;
public:
	Class();
	void values(std::string valueName, std::string valueSurname, int valueDuration);
	void values(std::string valueName, std::string valueSurname, int valueDuration, int valueAmount);
	std::string GetName();
	void SetName(std::string valueName);
	std::string GetSurname();
	void SetSurname(std::string valueSurname);
	int GetDuration();
	void SetDuration(int valueDuration);
	int GetAmount();
	void SetAmount(int valueAmount);
	void Table();
	~Class();
};

#endif