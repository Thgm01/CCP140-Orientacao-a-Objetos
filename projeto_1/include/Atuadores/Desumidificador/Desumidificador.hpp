#ifndef DESUMIDIFICADOR_HPP
#define DESUMIDIFICADOR_HPP

#include "Atuadores/Atuador.hpp"

class Desumidificador : public Atuador
{
  public:
    Desumidificador(int pino);
    ~Desumidificador();
};

#endif
