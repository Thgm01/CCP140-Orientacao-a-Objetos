#ifndef DATA_H
#define DATA_H

#include <ctime>
#include <array>

class Data
{
public:
    Data();
    Data(int dia, int mes, int ano);
    
    std::array<int, 3> getData();
    
    void setData(int dia, int mes, int ano);
    void setTodayData();


private:
    int dia;
    int mes;
    int ano;
};

#endif // DATA_H