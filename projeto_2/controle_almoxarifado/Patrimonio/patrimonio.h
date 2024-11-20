#ifndef PATRIMONIO_H
#define PATRIMONIO_H

#include <string>

#include "Date/date.h"
#include "../Collaborators/Person/person.h"

class Patrimonio
{
public:
    Patrimonio(int id, std::string marca, std::string modelo, std::string descricao, Date dataEntrada);
    ~Patrimonio();

    int getId();
    std::string getMarca();
    std::string getModelo();
    std::string getDescricao();
    Date getDataDeEntrada();
    Person *getLoanedTo();

    bool setId(const int &id);
    void setMarca(const std::string &marca);
    void setModelo(const std::string &modelo);
    void setDataEntrada(const Date &dataEntrada);
    void setLoanedTo(Person *person);

    bool operator==(const Patrimonio &patrimonio);

private:
    int         id;
    std::string marca;
    std::string modelo;
    std::string descricao;
    Date        dataEntrada;
    Person * loanedTo;
};

#endif // PATRIMONIO_H
