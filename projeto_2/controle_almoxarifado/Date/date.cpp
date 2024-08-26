#include "date.h"

Date::Date()
{
    setTodayDate();
}

Date::Date(int day, int month, int year)
{
    this->setDate(day, month, year);
}


std::array<int, 3> Date::getDate()
{
    return std::array<int, 3>{this->day, this->month, this->year};
}

void Date::setDate(int day, int month, int year)
{
    this->day = day;
    this->month = month;
    this->year = year;
}

void Date::setTodayDate()
{
    time_t now = time(0);
    struct tm datetime = *localtime(&now);

    this->day = datetime.tm_mday;
    this->month = ++datetime.tm_mon;
    this->year = datetime.tm_year + 1900;
}

bool Date::isBefore(const Date& date)
{
    if(this->year == date.year)
    {
        if(this->month == date.month) return this->day <= date.day;
        else return this->month < date.month;
    }
    else return this->year < date.year;
}

int Date::diffYears(const Date &date)
{
    int years = date.year - this->year;

    if(this->month > date.month) years -= 1;
    else if(this->month == date.month && this->day > date.month) years -= 1;

    return years;
}
