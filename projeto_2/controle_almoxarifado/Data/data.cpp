#include "data.h"

Data::Data()
{
    setTodayData();
}

Data::Data(int dia, int mes, int ano)
{
    this->setData(dia, mes, ano);
}


std::array<int, 3> Data::getData()
{
    return std::array<int, 3>{this->dia, this->mes, this->ano}; 
}

void Data::setData(int dia, int mes, int ano)
{
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
}

void Data::setTodayData()
{
    time_t now = time(0);
    struct tm datetime = *localtime(&now);

    this->dia = datetime.tm_mday;
    this->mes = ++datetime.tm_mon;
    this->ano = datetime.tm_year + 1900;
}