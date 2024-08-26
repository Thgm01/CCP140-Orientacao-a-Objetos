#ifndef ALUNO_H
#define ALUNO_H

#include <vector>


#include "Date/date.h"
#include "../Person/person.h"
#include "../utils.h"

class Aluno : public Person
{
public:
    Aluno(std::string nome, Date birthdayDate, char gender);
    
    // void setNome(std::string Nome);

private:
    std::vector<int>    numMatricula;
    Date                dataMatricula;
    Curso               curso;
    int                 ciclo;
    Status              status;
};

#endif // ALUNO_H
