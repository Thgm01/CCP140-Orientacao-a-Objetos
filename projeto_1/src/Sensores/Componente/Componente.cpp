#include "Sensores/Componente/Componente.hpp"

#include <iostream>

void Componente::ligar()
{
    try
    {
        if(this->ligado)
        {
            throw 1;
        }
        this->ligado = true;
        std::cout << "Componente está ligando" << std::endl;
    }
    catch(...)
    {
        std::cout << "O Componente já está ligado" << std::endl;
    }
}

void Componente::desligar()
{
    try
    {
        if(!this->ligado)
        {
            throw 1;
        }
        this->ligado = false;
        std::cout << "Componente está desligando" << std::endl;
    }
    catch(...)
    {
        std::cout << "O Componente já está desligado" << std::endl;
    }   
}
