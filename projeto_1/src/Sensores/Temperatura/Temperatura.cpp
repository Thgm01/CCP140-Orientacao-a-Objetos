#include "Sensores/Temperatura/Temperatura.hpp"

Temperatura::Temperatura(int initialValue) : Sensor(initialValue)
{
  this->ligar();
  this->conectar();
}

float Temperatura::getTemperaturaEmC() 
{
  int sensor_read = this->getValor();
  float temperaturaEmC = ((sensor_read*5.0/(1023))/0.01);

  return temperaturaEmC;
}

float Temperatura::getTemperaturaEmK()
{
  float temperaturaEmK= this->getTemperaturaEmC() + 273;

  return temperaturaEmK;
}

float Temperatura::getTemperaturaEmF()
{
  float temperaturaEmF = (this->getTemperaturaEmC() * 9/5.0) + 32;

  return temperaturaEmF;
}
