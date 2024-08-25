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

std::array<int, 3> Pessoa::getDataDeNascimento()
{
    return this->dataDeNascimento.getData();
}

std::string Pessoa::getSexo()
{
    switch (this->sexo)
    {
    case 'm':
        return "Masculino";

    case 'f':
        return "Feminino";

    default:
        return "Não Especificado";
    };
}

int Pessoa::getIdade() //fazer essa função
{
    return 0;
}

void Pessoa::setNome(std::string nome)
{
    this->nome = nome;
}

void Pessoa::setDataDeNascimento(Data dataDeNascimento) //fazer validação de data
{
    this->dataDeNascimento = dataDeNascimento;
}

void Pessoa::setSexo(char sexo) //Ver de colocar uma verificação
{
    this->sexo = sexo;
}
