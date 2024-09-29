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

int Componente::ligar()
{
  if(gpioInitialise() < 0)
  {
    std::cerr << "Falha ao iniciar" << std::endl;
    this->ligado = false;
    return -1;
  }

  this->ligado = true;
}

bool Componente::estaLigado()
{
  return this->ligado;
}

void Componente::desligar()
{
  this->ligado = false;
  this->desconectar();
}

bool Componente::conectar()
{
  if(this->ligado)
  {
    this->conectado = true;
    return true;
  }

  std::cout << "Componente não está ligado ainda" << std::endl;
  return false;
}

void Componente::desconectar()
{
  this->conectado = false;
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



