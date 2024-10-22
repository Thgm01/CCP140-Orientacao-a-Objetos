#ifndef SALA_HPP
#define SALA_HPP

#include <vector>

#include "Atuadores/Atuador.hpp"
#include "Sensores/Sensor.hpp"

class Sala
{
  public:
    Sala(int limiarClaridade, int mediaUmidade, int thUmidade,
         int temperaturaDesejada, int thTemperatura, char escalaTemp, int horaAtivacao);
    ~Sala();

    void atualiza();
    
  private:
    std::vector<Atuador*> atuadores;
    std::vector<Sensor*> sensores;

    bool ajustandoUmidade = false;
    int mediaUmidade;
    int thUmidade;
    
    bool ajustandoTemperatura = false;
    int temperaturaDesejada;
    int thTemperatura;
    char escalaTemp;
    
    int horaAtivacao;
};

#endif  
