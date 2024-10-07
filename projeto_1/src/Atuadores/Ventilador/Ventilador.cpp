#include "Atuadores/Ventilador/Ventilador.hpp"

#include <iostream>
#include <pigpio.h>

Ventilador::Ventilador(int pino) : Atuador(pino)
{
  this->conectar();
}

Ventilador::~Ventilador()
{
  this->setVelocidade(0);
}

bool Ventilador::conectar()
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

bool Ventilador::setValor(int valor)
{
  if(this->conectado)
  {
    gpioPWM(this->getPino(), valor);
    return true;
  }
  
  std::cout << "Não está conectado" << std::endl;
  return false;
}

bool Ventilador::setVelocidade(int velocidade)
{
  if(velocidade < 0 || velocidade > 255)
  {
    std::cout << "Valor inválido" << std::endl;
    return false;
  }
  else if(velocidade == 0) this->desligar();
  else
  {
    this->ligar();
    this->valor = velocidade;
  }

  std::cout << "Definindo pino " << this->getPino() << " com valor " << this->valor << std::endl;
  return this->setValor(velocidade);
}
