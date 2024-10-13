#ifndef SALA_HPP
#define SALA_HPP

#include <vector>

#include "Atuadores/Atuador.hpp"
#include "Sensores/Sensor.hpp"

class Sala
{
  public:
    Sala(int limiarClaridade, int mediaUmidade, int thUmidade);
    ~Sala();

    void atualiza();
    
  private:
    std::vector<Atuador*> atuadores;
    std::vector<Sensor*> sensores;

    bool ajustando = false;
    int mediaUmidade;
    int thUmidade;
};

#endif  
