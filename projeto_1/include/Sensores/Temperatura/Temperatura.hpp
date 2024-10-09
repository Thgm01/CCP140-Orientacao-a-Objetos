#ifndef TEMPERATURA_HPP
#define TEMPERATURA_HPP

#include "Sensores/Sensor.hpp"

class Temperatura : public Sensor
{
  public:
    Temperatura(int pino);
    ~Temperatura();

    float getTemperaturaEmC();
    float getTemperaturaEmF();
    float getTemperaturaEmK();
};

#endif
