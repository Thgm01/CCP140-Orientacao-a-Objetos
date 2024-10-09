#include "Sensores/Umidade/Umidade.hpp"

Umidade::Umidade(int pino) : Sensor(pino)
{
  this->nome = "Umidade";
}

Umidade::~Umidade()
{
}

float Umidade::getUmidadeRelativa()
{
  this->getValor();
  float umidadeRelativa = this->valor * 100.0/1023;
  return umidadeRelativa;
}
