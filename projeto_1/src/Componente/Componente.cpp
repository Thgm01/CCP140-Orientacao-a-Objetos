#include "Componente/Componente.hpp"

#include <iostream>

Componente::Componente(int initialValue) 
{ 
  srand(time(NULL)); 
  this->initialValue = initialValue;
}

void Componente::ligar() {
  try {
    if (this->ligado)
      throw 1;

    this->ligado = true;
    std::cout << "Componente está ligando" << std::endl;
  } catch (...) {
    std::cout << "O Componente já está ligado" << std::endl;
  }
}

void Componente::desligar() {
  try {
    if (!this->ligado) {
      throw 1;
    }
    this->ligado = false;
    std::cout << "Componente está desligando" << std::endl;
  } catch (...) {
    std::cout << "O Componente já está desligado" << std::endl;
  }
}

bool Componente::conectar() // FAZER
{
  if (this->ligado) {
    this->conectado = true;
    this->valor = initialValue;
    return true;
  }

  this->conectado = false;
  return false;
}

void Componente::desconectar() // FAZER
{
  this->conectado = false;
}

int Componente::getValor() {
  
  if (this->conectado)
  {
    this->valor += rand() % 10 - rand() % 10;
  }

  return this->valor;
}
