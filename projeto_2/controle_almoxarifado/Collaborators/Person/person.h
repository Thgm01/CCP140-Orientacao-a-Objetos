/**
 * @file pessoa.h
 * @author Thiago M.
 * @brief Classe base para criar um objeto de uma pessoa
 */

#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include "Date/date.h"

/**
 * @brief Classe que representa uma pessoa (aluno ou funcionário)
 * 
 */

class Person
{
public:
        /**
         * @brief Class constructor
         * 
         * @param name
         * @param birthdayDate
         * @param gender
         */
        Person(std::string name, Date birthdayDate, char gender);
        
        /**
         * @brief
         * 
         * @return Person name as std::string
         */
        std::string getName();

        /**
         * @brief 
         *
         * @return array with day, month and year
         */
        std::array<int, 3> getBirthdayDate();

        /**
         * @brief 
         *
         * @return person gender as std::string
         */
        std::string getGender();

        /**
         * @brief 
         *
         * @return person age, only year
         */
        int getAge();

        /**
         * @brief Function for edit person name
         * 
         * @param name new person name
         */
        void setName(std::string name);

        /**
         * @brief Edit person birthday date
         *
         * @param birthdayDate new person birthday date
         */
        void setBirthdayDate(Date birthdayDate);

        /**
         * @brief Edit person gender
         *
         * @param gender new person gender
         */
        void setGender(char gender);

private:
        std::string name;
        Date birthdayDate;
        char gender;
};

#endif // PESSOA_H
