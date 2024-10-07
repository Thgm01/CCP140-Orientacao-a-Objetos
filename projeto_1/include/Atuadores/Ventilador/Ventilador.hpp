#ifndef VENTILADOR_HPP
#define VENTILADOR_HPP

#include "Atuadores/Atuador.hpp" 

class Ventilador : public Atuador
{
  public:
    Ventilador(int pino);
    ~Ventilador();

    bool conectar();
    bool setValor(int valor);
    bool setVelocidade(int velocidade);
};


#endif
