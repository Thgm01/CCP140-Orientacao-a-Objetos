#include "date.h"

Date::Date()
{
    setTodayDate();
}

Date::Date(int day, int month, int year)
{
    this->setDate(day, month, year);
}

/*========================= GETTERS =========================*/
std::array<int, 3> Date::getDate()
{
    return std::array<int, 3>{this->day, this->month, this->year};
}

int Date::getDay()
{
    return this->day;
}

int Date::getMonth()
{
    return this->month;
}

int Date::getYear()
{
    return this->year;
}


/*========================= SETTERS =========================*/
void Date::setDate(const int &day, const int &month, const int &year)
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

void Date::setDay(const int &day)
{
    bool erro = false;

    this->monthDays[1] = isLeapYear(this->year) ? 29 : 28;

    if(day<1) erro = true;
    else if(day > monthDays[this->month-1]) erro = true;

    if(!erro) this->day = day;
    else std::cout << "Invalid day" << std::endl;
}

void Date::setMonth(const int &month)
{
    bool erro = false;

    if(month < 1 || month > 12) erro = true;
    else if(this->day > monthDays[month-1]) erro = true;

    if(!erro) this->month = month;
    else std::cout << "Invalid Month" << std::endl;

}

void Date::setYear(const int &year)
{
    if(year > 0) this->year = year;
    else std::cout << "Invalid Year" << std::endl;
}


/*========================= OTHERS =========================*/

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

bool Date::isLeapYear(const int &year)
{
    return (year % 4) == 0 && ((year % 100) != 0 || (year % 400) == 0);
}


