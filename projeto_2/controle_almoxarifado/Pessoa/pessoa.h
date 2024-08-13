/**
 * @file pessoa.h
 * @author Thiago M.
 * @brief Classe base para criar um objeto de uma pessoa
 */

#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include "data.h"

/**
 * @brief Classe que representa uma pessoa (aluno ou funcionário)
 * 
 */

class Pessoa
{
public:
        /**
         * @brief Construtor da classe
         * 
         * @param nome - Nome da pessoa
         * @param dataDeNascimento - Data de nascimento da pessoa
         * @param sexo - Qual o sexo da pessoa
         */
        Pessoa(std::string nome, Data dataDeNascimento, char sexo);
        
        /**
         * @brief Função para obter o nome da pessoa
         * 
         * @return std::string - Nome da pessoa
         */
        std::string getName();


private:
        std::string nome;
        Data dataDeNascimento;
        char sexo;
};

#endif // PESSOA_H
