#include "Atuadores/Lampada/Lampada.hpp"

Lampada::Lampada(int pino) : Atuador(pino)
{
}

Lampada::~Lampada() //Fazer ele desligar quando acabar
{
}

bool Lampada::conectar()
{
  if(this->estaLigado())
  {
    gpioSetPWMfrequency(this->getPino(), 800); // Define a frequência PWM em 800 Hz
  }
}

bool Lampada::setValor(int valor)
{
  if(this->estaConectado())
  {
    gpioPWM(this->getPino(), valor);
    return true;
  }
  
  return false;
}

bool Lampada::setBrilho(int brilho)
{
  if(brilho>=0 && brilho<=255)
  {
    if(this->setValor(brilho)) return true;
  }
  
  return false;
}
