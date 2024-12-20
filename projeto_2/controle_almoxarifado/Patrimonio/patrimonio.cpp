#include "patrimonio.h"

Patrimonio::Patrimonio(int id, std::string marca, std::string modelo, std::string descricao, Date dataEntrada)
{
    this->id = id;
    this->marca = marca;
    this->modelo = modelo;
    this->descricao = descricao;
    this->dataEntrada = dataEntrada;
    this->loanedTo = NULL;
}


Patrimonio::~Patrimonio()
{
}

int Patrimonio::getId()
{
    return this->id;
}

std::string Patrimonio::getMarca()
{
    return this->marca;
}


std::string Patrimonio::getModelo()
{
    return this->modelo;
}

std::string Patrimonio::getDescricao()
{
    return this->descricao;
}

Date Patrimonio::getDataDeEntrada()
{
    return this->dataEntrada;
}

Person *Patrimonio::getLoanedTo()
{
    return this->loanedTo;
}

bool Patrimonio::setId(const int &id)
{
    if(id < 10e2) return false;

    this->id = id;
    return true;
}

void Patrimonio::setMarca(const std::string &marca)
{
    this->marca = marca;
}

void Patrimonio::setModelo(const std::string &modelo)
{
    this->modelo = modelo;
}

void Patrimonio::setDataEntrada(const Date &dataEntrada)
{
    this->dataEntrada = dataEntrada;
}

void Patrimonio::setLoanedTo(Person *person)
{
    if(this->loanedTo != NULL)
    {
        std::cout << "O patrimonio está emprestado" << std::endl;
        return;
    }

    this->loanedTo = person;
}


bool Patrimonio::operator==(const Patrimonio &patrimonio)
{
    return (patrimonio.id == this->id);
}
