// #include "Sensores/Temperatura/Temperatura.hpp"

#include "Atuadores/Lampada/Lampada.hpp"

#include <iostream>
#include <unistd.h> // Para a função sleep

int main()
{
    std::cout << "Inicio do programa" << std::endl;

    Lampada l1 = Lampada(18);
    l1.ligar();
    l1.conectar();

    l1.setBrilho(255);
    usleep(1000000); 
    l1.setBrilho(10);
    usleep(1000000); 
    l1.setBrilho(0);
    usleep(1000000); 

} 
