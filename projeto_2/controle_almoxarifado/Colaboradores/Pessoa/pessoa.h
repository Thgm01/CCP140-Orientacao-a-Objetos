/**
 * @file pessoa.h
 * @author Thiago M.
 * @brief Classe base para criar um objeto de uma pessoa
 */

#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include "Data/data.h"

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
        std::string getNome();

        /**
         * @brief Função para obter a data de nascimento da pessoa
         *
         * @return std::array - Array com dia, mes e ano
         */
        std::array<int, 3> getDataDeNascimento();

        /**
         * @brief Função para obter qual o sexo da pessoa
         *
         * @return std::string - Sexo da pessoa não abreviado
         */
        std::string getSexo();

        /**
         * @brief Função para obter idade da pessoa
         *
         * @return Idade atual da pessoa
         */
        int getIdade();

        /**
         * @brief Difinir um nome para pessoa
         * 
         * @param nome Nome da pessoa
         */
        void setNome(std::string nome);

        /**
         * @brief Editar a data de nascimento da pessoa
         *
         * @param dataDeNascimento - Data editada de nascimento
         */
        void setDataDeNascimento(Data dataDeNascimento);

        /**
         * @brief setSexo
         *
         * @param sexo
         */
        void setSexo(char sexo);

private:
        std::string nome;
        Data dataDeNascimento;
        char sexo;
};

#endif // PESSOA_H
