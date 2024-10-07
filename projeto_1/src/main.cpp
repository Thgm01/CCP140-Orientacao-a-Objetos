// #include "Sensores/Temperatura/Temperatura.hpp"

#include "Atuadores/Lampada/Lampada.hpp"
#include "Atuadores/Ventilador/Ventilador.hpp"

#include <iostream>
#include <unistd.h> // Para a função sleep

int main()
{
    std::cout << "Inicio do programa" << std::endl;

    Lampada l1 = Lampada(18);
    
    Ventilador v1 = Ventilador(12);
    

    for(int i=0; i<255; i++)
    {
        l1.setBrilho(i);
        v1.setVelocidade(i);
        usleep(1e5);

    }
} 
