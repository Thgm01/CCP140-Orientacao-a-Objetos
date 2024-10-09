#ifndef LUMINOSIDADE_HPP
#define LUMINOSIDADE_HPP

#include <pigpio.h>

#include "Sensores/Sensor.hpp"

class Luminosidade : public Sensor
{
  public:
    Luminosidade(int pino);
    ~Luminosidade();

    void setLimiarClaridade(int limiar);
    bool estaClaro();

  private:
    int limiarClaridade;
};


#endif
