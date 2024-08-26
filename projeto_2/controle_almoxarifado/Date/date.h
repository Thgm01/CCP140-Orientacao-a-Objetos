#ifndef DATA_H
#define DATA_H

#include <ctime>
#include <array>

class Date
{
public:
    Date();
    Date(int day, int month, int year);
    
    std::array<int, 3> getDate();
    
    void setDate(int day, int month, int year);
    void setTodayDate();

    bool isBefore(const Date &date);

private:
    int day;
    int month;
    int year;
};

#endif // DATA_H
