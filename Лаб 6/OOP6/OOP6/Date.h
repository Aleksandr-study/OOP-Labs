#ifndef DATE_H
#define DATE_H
//базовий клас: Дата (Рік, Місяць, День); 

class Date {
private:
    int day;
    int month;
    int year;
    int yearOfAdmission;
public:
    Date();
    Date(int day_, int month_, int year_);
    Date(int day_, int month_, int year_, int yearOfAdmission_);
    Date(int year__);
    Date(const Date& T);
    int getDay();
    void setDay(int day_);
    int getMonth();
    void setMonth(int month_);
    int getYear();
    void setYear(int year_);
    int getYearOfAdmission();
    void setYearOfAdmission(int yearOfAdmission_);
    virtual void Show();
    virtual void ShowYear();
    virtual ~Date();
};
#endif