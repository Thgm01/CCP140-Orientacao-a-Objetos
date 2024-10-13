// #include "Sensores/Temperatura/Temperatura.hpp"

#include "Atuadores/Lampada/Lampada.hpp"
#include "Atuadores/Ventilador/Ventilador.hpp"
#include "Atuadores/Umidificador/Umidificador.hpp"
#include "Atuadores/Desumidificador/Desumidificador.hpp"
#include "Sensores/Luminosidade/Luminosidade.hpp"
#include "Sensores/Temperatura/Temperatura.hpp"
#include "Sensores/Umidade/Umidade.hpp"

#include "Sala/Sala.hpp"

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
    
    //Sensor s1 = Sensor(7);
    // Luminosidade s1 = Luminosidade(7);
    // s1.setLimiarClaridade(512);
    //
    // Lampada l1 = Lampada(18);
    // while(1)
    // {
    //     if(!s1.estaClaro()) l1.setBrilho(255);
    //     else l1.setBrilho(0);
    //     //std::cout << "está claro? " << s1.estaClaro() << std::endl;
    //     usleep(1e6);
    // }
    Sala s1 = Sala(200);
    while(1)
    {
        // std::cout << "temperatura" << t1.getUmidadeRelativa() << std::endl;
        s1.atualiza();
        usleep(1e5);
    }
    
} 
