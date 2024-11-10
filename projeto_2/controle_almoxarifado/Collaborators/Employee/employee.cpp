#include "employee.h"

Employee::Employee(std::string name, Date birthdayDate, char gender,
                   std::string phone, std::string email,
                   std::string registrationNum, Date registrationDate,
                   Position position, Status status = Status::Ok) : Person(name, birthdayDate, gender, phone, email)
{
    this->registrationNum = registrationNum;
    this->registrationDate = registrationDate;
    this->position = position;
    this->status = status;
}

Employee::~Employee()
{
}

//   ____      _   _
//  / ___| ___| |_| |_ ___ _ __ ___
// | |  _ / _ \ __| __/ _ \ '__/ __|
// | |_| |  __/ |_| ||  __/ |  \__ \
//  \____|\___|\__|\__\___|_|  |___/

std::string Employee::getRegistrationNum()
{
    return this->registrationNum;
}

std::array<int, 3> Employee::getRegistrationDate()
{
    return this->registrationDate.getDate();
}

Position Employee::getPosition()
{
    return this->position;
}

Status Employee::getStatus()
{
    return this->status;
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

void Employee::setPosition(const Position &position)
{
    this->position = position;
}

void Employee::setStatus(const Status &status)
{
    this->status = status;
}


//   ___  _   _
//  / _ \| |_| |__   ___ _ __ ___
// | | | | __| '_ \ / _ \ '__/ __|
// | |_| | |_| | | |  __/ |  \__ \
//  \___/ \__|_| |_|\___|_|  |___/

bool Employee::operator==(const Employee &employee)
{
    return (this->registrationNum.compare(employee.registrationNum) == 0);
}
