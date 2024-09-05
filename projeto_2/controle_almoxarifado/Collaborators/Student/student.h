#ifndef ALUNO_H
#define ALUNO_H

#include <vector>

#include "Date/date.h"
#include "../Person/person.h"
#include "../utils.h"

class Student : public Person
{
public:
    Student(std::string name, Date birthdayDate, char gender,
            std::string registrationNum, Date registrationDate,
            Curso course, int semester, Status status);

    bool operator==(const Student &student);
    


private:
    std::string registrationNum;
    Date        registrationDate;
    Curso       course;
    int         semester;
    Status      status;
};

#endif // ALUNO_H
