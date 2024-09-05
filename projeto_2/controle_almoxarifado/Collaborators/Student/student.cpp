#include "student.h"

Student::Student(std::string name, Date birthdayDate, char gender,
                 std::string registrationNum, Date registrationDate,
                 Curso course, int semester, Status status = Status::Ok) : Person(name, birthdayDate, gender)
{
    this->registrationNum   = registrationNum;
    this->registrationDate  = registrationDate;
    this->course            = course;
    this->semester          = semester;
    this->status            = status;
}

bool Student::operator==(const Student &student)
{
    return (this->registrationNum.compare(student.registrationNum) != 0);
}
