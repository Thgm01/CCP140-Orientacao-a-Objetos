#ifndef DATA_H
#define DATA_H

#include <ctime>
#include <array>
#include <iostream>

class Date
{
public:
    Date();
    Date(int day, int month, int year);
    
    std::array<int, 3> getDate();
    int getDay();
    int getMonth();
    int getYear();
    
    void setDate(const int &day,const int &month, const int &year);
    void setTodayDate();
    void setDay(const int &day);
    void setMonth(const int &month);
    void setYear(const int &year);

    bool isBefore(const Date &date);
    int diffYears(const Date &date);

private:
    int day;
    int month;
    int year;

    int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    bool isLeapYear(const int &year);
};

#endif // DATA_H
