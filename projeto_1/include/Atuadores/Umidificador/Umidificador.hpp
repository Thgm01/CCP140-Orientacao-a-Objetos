#ifndef UMIDIFICADOR_HPP
#define UMIDIFICADOR_HPP

#include "Atuadores/Atuador.hpp"

class Umidificador : public Atuador
{
  public:
    bool setConfiguracao(int configuracao);
};



#endif
