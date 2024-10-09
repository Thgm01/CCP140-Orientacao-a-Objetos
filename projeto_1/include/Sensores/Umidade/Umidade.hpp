#ifndef UMIDADE_HPP
#define UMIDADE_HPP

#include "Sensores/Sensor.hpp"

class Umidade : public Sensor
{
  public:
    Umidade(int pino);
    ~Umidade();

    float getUmidadeRelativa();
};

#endif 
