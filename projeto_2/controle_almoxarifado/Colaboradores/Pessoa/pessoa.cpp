#include "pessoa.h"

Pessoa::Pessoa(std::string nome, Data dataDeNascimento, char sexo)
{
    this->nome = nome;
    this->dataDeNascimento = dataDeNascimento;
    this->sexo = sexo;
}

std::string Pessoa::getNome()
{
    return this->nome;
}


void Pessoa::setNome(std::string nome)
{
    this->nome = nome;
}