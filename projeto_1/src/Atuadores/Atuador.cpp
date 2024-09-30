#include "Atuadores/Atuador.hpp"

#include <pigpio.h>

Atuador::Atuador(int pino) : Componente(pino)
{
}

Atuador::~Atuador()
{
}

bool Atuador::conectar()
{
  if(this->estaLigado())
  {
    gpioSetMode(getPino(), PI_OUTPUT);
    return true;
  }

  return false;
}

bool Atuador::setValor(int valor)
{
  if(this->estaLigado() && this->estaConectado())
  {
    gpioWrite(this->getPino(), valor);
    return true;
  }
  return false;
}
