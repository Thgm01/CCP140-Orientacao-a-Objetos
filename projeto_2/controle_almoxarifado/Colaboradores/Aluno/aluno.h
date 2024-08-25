#ifndef ALUNO_H
#define ALUNO_H

#include <vector>


#include "Data/data.h"
#include "../Pessoa/pessoa.h"
#include "../utils.h"

class Aluno : public Pessoa
{
public:
    Aluno(std::string nome, Data dataDeNascimento, char sexo);
    
    // void setNome(std::string Nome);

private:
    std::vector<int>    numMatricula;
    Data                dataMatricula;
    Curso               curso;
    int                 ciclo;
    Status              status;
};

#endif // ALUNO_H
