#ifndef SENSOR_HPP
#define SENSOR_HPP

#include "Componente/Componente.hpp"

class Sensor : public Componente {
  public:
    Sensor(int pino);
    ~Sensor();

    bool conectar();
    bool getValor();
};

#endif 
