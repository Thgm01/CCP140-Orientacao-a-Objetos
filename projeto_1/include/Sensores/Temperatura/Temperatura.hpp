#include "Sensores/Sensor/Sensor.hpp"

class Temperatura : public Sensor
{
  public:
    Temperatura(int initialValue);
    float getTemperaturaEmC();
    float getTemperaturaEmK();
    float getTemperaturaEmF();
};
