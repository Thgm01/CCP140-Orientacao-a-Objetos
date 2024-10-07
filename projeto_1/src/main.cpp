// #include "Sensores/Temperatura/Temperatura.hpp"

#include "Atuadores/Lampada/Lampada.hpp"
#include "Atuadores/Ventilador/Ventilador.hpp"
#include "Atuadores/Umidificador/Umidificador.hpp"
#include "Atuadores/Desumidificador/Desumidificador.hpp"

#include <iostream>
#include <unistd.h> // Para a função sleep

int main()
{
    std::cout << "Inicio do programa" << std::endl;

    //Lampada l1 = Lampada(18);
    
    //Ventilador v1 = Ventilador(12);
    
    //v1.setVelocidade(255);
    //l1.setBrilho(255);

    //usleep(1e6);

    //v1.setVelocidade(10);
    //l1.setBrilho(10);

    //usleep(1e6);

    //v1.setVelocidade(0);
    //l1.setBrilho(0);

    //usleep(1e6);
    

    //for(int i=0; i<255; i++)
    //{
    //    l1.setBrilho(i);
    //    v1.setVelocidade(i);
    //    usleep(1e5);
    //}
    
    Desumidificador u1 = Desumidificador(18);

    u1.setValor(1);
    usleep(1e6);

    u1.setValor(0);
    usleep(1e6);

    u1.setValor(1);
    usleep(1e6);
} 
