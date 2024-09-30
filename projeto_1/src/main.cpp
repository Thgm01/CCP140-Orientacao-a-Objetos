// #include "Sensores/Temperatura/Temperatura.hpp"

#include "Atuadores/Atuador.hpp"

#include <iostream>

int main()
{
    std::cout << "Inicio do programa" << std::endl;

    Atuador at1 = Atuador(17);
    Atuador at2 = Atuador(18);

    at1.conectar();
    at1.setValor(0);
    

    at2.conectar();
    at2.setValor(1);


}
