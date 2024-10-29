#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

#include "../Person/person.h"

class Employee : public Person
{
    public:
        Employee(std::string name, Date birthdayDate, char gender,
                 std::string phone, std::string email,
                 std::string registrationNum);
        ~Employee();

        //   ____      _   _
        //  / ___| ___| |_| |_ ___ _ __ ___
        // | |  _ / _ \ __| __/ _ \ '__/ __|
        // | |_| |  __/ |_| ||  __/ |  \__ \
        //  \____|\___|\__|\__\___|_|  |___/

        std::string getRegistrationNumber();

        //  ____       _   _
        // / ___|  ___| |_| |_ ___ _ __ ___
        // \___ \ / _ \ __| __/ _ \ '__/ __|
        //  ___) |  __/ |_| ||  __/ |  \__ \
        // |____/ \___|\__|\__\___|_|  |___/

        void setRegistrationNumber(const std::string &registrationNum);


        //   ___  _   _
        //  / _ \| |_| |__   ___ _ __ ___
        // | | | | __| '_ \ / _ \ '__/ __|
        // | |_| | |_| | | |  __/ |  \__ \
        //  \___/ \__|_| |_|\___|_|  |___/

        bool operator==(const Employee &employee);
    private:
        std::string registrationNum;

};



#endif // EMPLOYEE_H
