#include "employee.h"

Employee::Employee(std::string name, Date birthdayDate, char gender,
                   std::string phone, std::string email,
                   std::string registrationNum) : Person(name, birthdayDate, gender, phone, email)
{
    this->registrationNum = registrationNum;
}

Employee::~Employee()
{
}

//   ____      _   _
//  / ___| ___| |_| |_ ___ _ __ ___
// | |  _ / _ \ __| __/ _ \ '__/ __|
// | |_| |  __/ |_| ||  __/ |  \__ \
//  \____|\___|\__|\__\___|_|  |___/

std::string Employee::getRegistrationNumber()
{
    return this->registrationNum;
}

//  ____       _   _
// / ___|  ___| |_| |_ ___ _ __ ___
// \___ \ / _ \ __| __/ _ \ '__/ __|
//  ___) |  __/ |_| ||  __/ |  \__ \
// |____/ \___|\__|\__\___|_|  |___/

void Employee::setRegistrationNumber(const std::string &registrationNumber)
{
    this->registrationNum = registrationNumber;
}

//   ___  _   _
//  / _ \| |_| |__   ___ _ __ ___
// | | | | __| '_ \ / _ \ '__/ __|
// | |_| | |_| | | |  __/ |  \__ \
//  \___/ \__|_| |_|\___|_|  |___/

bool Employee::operator==(const Employee &employee)
{
    return (this->registrationNum.compare(employee.registrationNum) != 0);
}
