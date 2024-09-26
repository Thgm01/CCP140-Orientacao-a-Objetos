#include "Sensores/Temperatura/Temperatura.hpp"

#include <iostream>

int main()
{
    Temperatura temp = Temperatura(50);

    for(int i=0; i<100; i++) std::cout << temp.getTemperaturaEmC() << std::endl;
}
