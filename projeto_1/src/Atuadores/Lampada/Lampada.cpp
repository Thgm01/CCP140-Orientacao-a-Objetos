#include "Atuadores/Lampada/Lampada.hpp"

#include <pigpio.h>

Lampada::Lampada(int pino) : Atuador(pino)
{
  this->conectar();
  this->nome = "Lampada";
}

Lampada::~Lampada() //Fazer ele desligar quando acabar
{
  this->setValor(0);
}

bool Lampada::conectar()
{
  if(gpioInitialise() < 0)
  {
    std::cerr << "Falha ao iniciar" << std::endl;
    this->conectado = false;
    return false;
  }
  std::cout << "Iniciado com sucesso" << std::endl;
  
  gpioSetMode(this->getPino(), PI_OUTPUT);
  if(gpioSetPWMfrequency(this->getPino(), 800) == 0)
  {
    std::cout << "Falha com o PWM" << std::endl;
    this->conectado = false;
    return false;
  }
  
  std::cout << "PWM iniciado com sucesso" << std::endl;
  this->conectado = true;
  return true;
}

bool Lampada::setValor(int valor)
{
  if(this->conectado)
  {
    gpioPWM(this->getPino(), valor);
    return true;
  }
  
  std::cout << "Não está conectado" << std::endl;
  return false;
}

bool Lampada::setBrilho(int brilho)
{
  if(brilho < 0 || brilho > 255)
  {
    std::cout << "Valor inválido" << std::endl;
    return false;
  }
  else if(brilho == 0) this->desligar();
  else
  {
    this->ligar();
    this->valor = brilho;
  }

  // std::cout << "Definindo pino " << this->getPino() << " com valor " << this->valor << std::endl;
  return this->setValor(brilho);
}
