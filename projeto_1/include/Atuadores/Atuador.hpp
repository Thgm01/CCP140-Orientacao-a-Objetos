#ifndef ATUADOR_HPP
#define ATUADOR_HPP

#include <iostream>

#include "Componente/Componente.hpp"

class Atuador : public Componente
{
  public:
    Atuador(int pino);
    ~Atuador();
    
    bool conectar();
    virtual bool setValor(int valor);
};


#endif
