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
    
    bool setDate(const int &day,const int &month, const int &year);
    void setTodayDate();
    bool setDay(const int &day);
    bool setMonth(const int &month);
    bool setYear(const int &year);

    bool isBefore(const Date &date);
    int diffYears(const Date &date);

private:
    int day = 1;
    int month = 1;
    int year = 2000;

    int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    bool isLeapYear(const int &year);
};

#endif // DATA_H
