#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

#include "../Person/person.h"
#include "../utils.h"

class Employee : public Person
{
    public:
        Employee(std::string name, Date birthdayDate, char gender,
                 std::string phone, std::string email,
                 std::string registrationNum,  Date registrationDate,
                 Position position, Status status);
        ~Employee();

        //   ____      _   _
        //  / ___| ___| |_| |_ ___ _ __ ___
        // | |  _ / _ \ __| __/ _ \ '__/ __|
        // | |_| |  __/ |_| ||  __/ |  \__ \
        //  \____|\___|\__|\__\___|_|  |___/

        std::string getRegistrationNum();
        std::array<int, 3> getRegistrationDate();
        Position getPosition();
        Status getStatus();

        //  ____       _   _
        // / ___|  ___| |_| |_ ___ _ __ ___
        // \___ \ / _ \ __| __/ _ \ '__/ __|
        //  ___) |  __/ |_| ||  __/ |  \__ \
        // |____/ \___|\__|\__\___|_|  |___/

        void setRegistrationNumber(const std::string &registrationNum);
        void setPosition(const Position &position);
        void setStatus(const Status &status);

        //   ___  _   _
        //  / _ \| |_| |__   ___ _ __ ___
        // | | | | __| '_ \ / _ \ '__/ __|
        // | |_| | |_| | | |  __/ |  \__ \
        //  \___/ \__|_| |_|\___|_|  |___/

        bool operator==(const Employee &employee);

    private:
        std::string registrationNum;
        Date registrationDate;
        Position position;
        Status status;
};



#endif // EMPLOYEE_H
