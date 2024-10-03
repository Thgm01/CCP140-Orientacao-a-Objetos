#ifdef LAMPADA_HPP
#define LAMPADA_HPP

#include "Atuadores/Atuador.hpp"

class Lampada : public Atuador
{
  Lampada(int pino);
  ~Lampada();

  bool conectar()
  bool setValor(int valor);
  bool setBrilho(int brilho);
}

#endif
