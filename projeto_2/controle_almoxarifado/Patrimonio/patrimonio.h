#ifndef PATRIMONIO_H
#define PATRIMONIO_H

#include <string>

#include "Data/data.h"

class Patrimonio
{
public:
    Patrimonio();

private:
    int         id;
    std::string marca;
    std::string modelo;
    std::string descricao;
    Data        dataEntrada;
};

#endif // PATRIMONIO_H
