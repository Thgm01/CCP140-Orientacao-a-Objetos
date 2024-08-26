#ifndef PATRIMONIO_H
#define PATRIMONIO_H

#include <string>

#include "Date/date.h"

class Patrimonio
{
public:
    Patrimonio();

private:
    int         id;
    std::string marca;
    std::string modelo;
    std::string descricao;
    Date        dataEntrada;
};

#endif // PATRIMONIO_H
