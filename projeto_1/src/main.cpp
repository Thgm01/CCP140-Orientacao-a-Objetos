// #include "Sensores/Temperatura/Temperatura.hpp"

#include "Atuadores/Lampada/Lampada.hpp"

#include <iostream>
#include <unistd.h> // Para a função sleep

int main()
{
    std::cout << "Inicio do programa" << std::endl;

    Lampada l1 = Lampada(18);
    l1.conectar();
    l1.ligar();

    for(int i=0; i<255; i++)
    {
        l1.setBrilho(i);
        usleep(1e5); 
    }
} 
