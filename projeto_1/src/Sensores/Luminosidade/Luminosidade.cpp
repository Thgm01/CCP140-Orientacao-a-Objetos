#include "Sensores/Luminosidade/Luminosidade.hpp"

#include <iostream>

Luminosidade::Luminosidade(int pino) : Sensor(pino)
{
  this->limiarClaridade = 512;
  this->nome = "Luminosidade";
}

Luminosidade::~Luminosidade()
{
}

void Luminosidade::setLimiarClaridade(int limiar)
{
  if(limiar < 0 || limiar > 1023)
  {
    std::cout << "Limiar inválido" << std::endl;
    return;
  }

  std::cout << "Novo limiar " << limiar << std::endl;
  this->limiarClaridade = limiar;
}

bool Luminosidade::estaClaro()
{
  this->getValor();
  std::cout << this->valor << std::endl;
  return this->valor > this->limiarClaridade;
}

int Luminosidade::getLimiar()
{
  return this->limiarClaridade;
}
