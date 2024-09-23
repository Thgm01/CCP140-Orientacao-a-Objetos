#include "Sensores/Componente/Componente.hpp"

#include <iostream>

Componente::Componente()
{
    srand(time(NULL));
}


void Componente::ligar()
{
    try
    {
        if(this->ligado) throw 1;
        
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

bool Componente::conectar() //FAZER
{
    if(this->ligado)
    {
        this->conectado = true;
        return true;    
    }
    
    this->conectado = false;
    return false;
}

void Componente::desconectar() //FAZER
{
    this->conectado = false;
}

int Componente::getValor()
{
    if(this->conectado)
    {
        this->valor = rand() % 255;
    }
    else this->valor = -1;

    return this->valor;
}