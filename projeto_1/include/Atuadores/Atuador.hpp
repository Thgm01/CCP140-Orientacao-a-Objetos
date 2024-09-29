#ifndef ATUADOR_HPP
#define ATUADOR_HPP

#include "Componente/Componente.hpp"

class Atuador : public Componente
{
  public:
    Atuador(int pino);
    ~Atuador();
    
    bool conectar();
    bool setValor(int valor);


};


#endif
