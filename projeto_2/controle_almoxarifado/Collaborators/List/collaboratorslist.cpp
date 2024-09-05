#include "collaboratorslist.h"

bool alunoNaLista(const std::vector<Student> &listaDeAluno, const Student &aluno)
{
    for(auto al : listaDeAluno)
    {
        if(al==aluno) return true;
    }
    return false;
}
