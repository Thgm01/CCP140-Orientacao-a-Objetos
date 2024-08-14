#include "data.h"

Data::Data()
{
    time_t now = time(0);
    struct tm datetime = *localtime(&now);

    this->dia = datetime.tm_mday;
    this->mes = ++datetime.tm_mon;
    this->ano = datetime.tm_year + 1900;
}

Data::Data(int dia, int mes, int ano)
{
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
}


std::array<int, 3> Data::getData()
{
   
    return 
}