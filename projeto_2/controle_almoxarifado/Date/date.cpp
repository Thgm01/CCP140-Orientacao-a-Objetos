#include "date.h"

#include <cmath>

Date::Date()
{
    setTodayDate();
}

Date::Date(int day, int month, int year)
{
    this->setDate(day, month, year);
}


//   ____      _   _                
//  / ___| ___| |_| |_ ___ _ __ ___ 
// | |  _ / _ \ __| __/ _ \ '__/ __|
// | |_| |  __/ |_| ||  __/ |  \__ \
//  \____|\___|\__|\__\___|_|  |___/

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


//  ____       _   _                
// / ___|  ___| |_| |_ ___ _ __ ___ 
// \___ \ / _ \ __| __/ _ \ '__/ __|
//  ___) |  __/ |_| ||  __/ |  \__ \
// |____/ \___|\__|\__\___|_|  |___/

bool Date::setDate(const int &day, const int &month, const int &year)
{
    int oldDay = this->day;
    int oldMonth = this->month;
    int oldYear = this->year;
    
    bool error = false;

    if(!this->setYear(year)) error = true;
    else if(!this->setMonth(month)) error = true;
    else if(!this->setDay(day)) error = true;
    
    if(!error) return true;

    // if have any issue to set date revert don't aply the changes
    this->setYear(oldYear);
    this->setMonth(oldMonth);
    this->setDay(oldDay);
    return false;
}

void Date::setTodayDate()
{
    time_t now = time(0);
    struct tm datetime = *localtime(&now);

    this->day = datetime.tm_mday;
    this->month = ++datetime.tm_mon;
    this->year = datetime.tm_year + 1900;
}

bool Date::setDay(const int &day)
{
    this->monthDays[1] = isLeapYear(this->year) ? 29 : 28;

    if(day<1)
    {
        std::cout << "Invalid day: day<1." << std::endl;
        return false;
    }
    else if(day > monthDays[this->month-1])
    {
        std::cout << "Invalid day: the month " << this->month << " has less days." << std::endl; 
        return false;
    }

    this->day = day;
    return true;
}

bool Date::setMonth(const int &month)
{
    if(month < 1 || month > 12) 
    {
        std::cout << "Invalid month: It isn't a real month" << std::endl;
        return false;
    }
    else if(this->day > monthDays[month-1])
    {
        std::cout << "Invalid month: the month " << this->month << " has less days."<< std::endl;
        return false;
    }

    this->month = month;
    return true;
}

bool Date::setYear(const int &year)
{
    if(year < 1900)
    {
        std::cout << "Invalid year: too old";
        return false;
    }

    this->year = year;
    return true;
}

//   ___  _   _                   
//  / _ \| |_| |__   ___ _ __ ___ 
// | | | | __| '_ \ / _ \ '__/ __|
// | |_| | |_| | | |  __/ |  \__ \
//  \___/ \__|_| |_|\___|_|  |___/

bool Date::isOlder(const Date& date)
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
    else if(this->month == date.month && this->day > date.day) years -= 1;

    if(years < 0) years = (years * -1) - 1 ;

    return years;
}

void Date::printDate()
{
    std::cout << this->day << "/" << this->month << "/" << this->year << std::endl;
}

bool Date::isLeapYear(const int &year)
{
    return (year % 4) == 0 && ((year % 100) != 0 || (year % 400) == 0);
}
