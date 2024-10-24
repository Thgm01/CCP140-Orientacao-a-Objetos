#include "student.h"

Student::Student(std::string name, Date birthdayDate, char gender,
                 std::string phone, std::string email,
                 std::string registrationNum, Date registrationDate,
                 Course course, int semester, Status status = Status::Ok) : Person(name, birthdayDate, gender, phone, email)
{
    this->registrationNum   = registrationNum;
    this->registrationDate  = registrationDate;
    this->course            = course;
    this->semester          = semester;
    this->status            = status;
}


//   ____      _   _
//  / ___| ___| |_| |_ ___ _ __ ___
// | |  _ / _ \ __| __/ _ \ '__/ __|
// | |_| |  __/ |_| ||  __/ |  \__ \
//  \____|\___|\__|\__\___|_|  |___/

std::string Student::getRegistrationNum()
{
    return this->registrationNum;
}

std::array<int, 3> Student::getRegistrationDate()
{
    return this->registrationDate.getDate();
}

Course Student::getCourse()
{
    return this->course;
}

int Student::getSemester()
{
    return this->semester;
}

Status Student::getStatus()
{
    return this->status;
}

bool Student::operator==(const Student &student)
{
    return (this->registrationNum.compare(student.registrationNum) != 0);
}


//  ____       _   _
// / ___|  ___| |_| |_ ___ _ __ ___
// \___ \ / _ \ __| __/ _ \ '__/ __|
//  ___) |  __/ |_| ||  __/ |  \__ \
// |____/ \___|\__|\__\___|_|  |___/

