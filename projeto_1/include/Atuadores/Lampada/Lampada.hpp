#ifndef LAMPADA_HPP
#define LAMPADA_HPP

#include "Atuadores/Atuador.hpp"

class Lampada : public Atuador
{
  public:
    Lampada(int pino);
    ~Lampada();

    bool conectar();
    bool setValor(int valor);
    bool setBrilho(int brilho);
};

#endif
