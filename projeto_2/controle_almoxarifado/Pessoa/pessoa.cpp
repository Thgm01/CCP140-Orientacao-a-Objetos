#include "pessoa.h"

Pessoa::Pessoa(std::string nome, Data dataDeNascimento, char sexo)
{
    this->nome = nome;
    this->dataDeNascimento = dataDeNascimento;
    this->sexo = sexo;
}

std::string Pessoa::getName()
{
    return this->nome;
}
