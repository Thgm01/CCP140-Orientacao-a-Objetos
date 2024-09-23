#include "Sensores/Componente/Componente.hpp"

#include <iostream>

int main()
{
    Componente componente = Componente();

    componente.ligar();
    componente.ligar();
    componente.conectar();

    for(int i=0; i<100; i++)
    {
        std::cout << componente.getValor() << std::endl;
    }
    componente.desligar();
    componente.desligar();

    return 0;
}