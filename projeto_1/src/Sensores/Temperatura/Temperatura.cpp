#include "Sensores/Temperatura/Temperatura.hpp"

Temperatura::Temperatura(int pino) : Sensor(pino)
{
  this->nome = "Temperatura";
} 

Temperatura::~Temperatura()
{
}

float Temperatura::getTemperaturaEmC()
{
  this->getValor();
  return this->valor * 50.0/1023.0;
}

float Temperatura::getTemperaturaEmF()
{
  float tempC = this->getTemperaturaEmC();
  float tempF = 1.8 * tempC + 32;
  return tempF;
}

float Temperatura::getTemperaturaEmK()
{
  float tempC = this->getTemperaturaEmC();
  float tempK = tempC + 273;
  return tempK;
}
