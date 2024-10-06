#include "Componente/Componente.hpp"

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <ostream>
#include <pigpio.h>

Componente::Componente(int pino) 
{ 
  srand(time(NULL));
  this->pino = pino;
}

Componente::~Componente()
{
}

bool Componente::conectar()
{
  if(gpioInitialise() < 0)
  {
    std::cerr << "Falha ao iniciar" << std::endl;
    this->conectado = false;
    return false;
  }

  std::cout << "Iniciado com sucesso" << std::endl;
  this->conectado = true;
  return true;
}

void Componente::desconectar()
{
  this->conectado = false;
  this->desligar();
}

int Componente::ligar()
{
  if(this->conectado)
  {
    this->ligado = true;
    this->valor = 1;
    return true;
  }
  
  std::cout << "Componente não está conectado" << std::endl;
  this->desligar();
  return false;
}

void Componente::desligar()
{
  this->ligado = false;
  this->valor = 0;
}


bool Componente::getLigado()
{
  return this->ligado;
}

bool Componente::getConectado()
{
  return this->conectado;
}

int Componente::getValor()
{
  this->valor = rand() % 1023;
  return this->valor;
}

int Componente::getPino()
{
  return this->pino;
}
