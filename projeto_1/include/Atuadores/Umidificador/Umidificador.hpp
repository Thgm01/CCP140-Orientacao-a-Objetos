#ifndef UMIDIFICADOR_HPP
#define UMIDIFICADOR_HPP

#include "Atuadores/Atuador.hpp"

class Umidificador : public Atuador
{
  public:
    Umidificador(int pino);
    ~Umidificador();
};



#endif
