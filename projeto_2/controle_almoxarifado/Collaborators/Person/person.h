/**
 * @file person.h
 * @author Thiago M. (thiago.tmoura01@gmail.com)
 * @brief Base class for a student object
 * @date 2024-8-10
 */

#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <array>
#include "Date/date.h"

/**
 * @brief Class that represents a person (student or employee)
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
        Person(std::string name, Date birthdayDate, char gender, std::string phone, std::string email);

        virtual ~Person();

        //   ____      _   _                
        //  / ___| ___| |_| |_ ___ _ __ ___ 
        // | |  _ / _ \ __| __/ _ \ '__/ __|
        // | |_| |  __/ |_| ||  __/ |  \__ \ 
        //  \____|\___|\__|\__\___|_|  |___/

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
        char getGender();

        /**
         * @brief 
         *
         * @return person age, only year
         */
        int getAge();

        /**
         * @brief Get the Phone object
         * 
         * @return person phone number
         */
        std::string getPhone();        

        /**
         * @brief Get the Email object
         * 
         * @return person email
         */
        std::string getEmail();


        //  ____       _   _                
        // / ___|  ___| |_| |_ ___ _ __ ___ 
        // \___ \ / _ \ __| __/ _ \ '__/ __|
        //  ___) |  __/ |_| ||  __/ |  \__ \
        // |____/ \___|\__|\__\___|_|  |___/

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
        void setBirthdayDate(const Date &birthdayDate);

        /**
         * @brief Edit person gender
         *
         * @param gender new person gender
         */
        void setGender(char gender);

        /**
         * @brief Set the Phone object
         * 
         * @param phone new person phone
         */
        void setPhone(std::string phone);

        /**
         * @brief Set the Email object
         * 
         * @param email new person email
         */
        void setEmail(std::string email);

private:
        std::string name;
        Date birthdayDate;
        char gender;
        std::string phone;
        std::string email;
};

#endif // PERSON_H
