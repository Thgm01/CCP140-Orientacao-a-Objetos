#include "Sensores/Componente/Componente.hpp"

int main()
{
    Componente componente = Componente();

    componente.ligar();
    componente.ligar();
    componente.desligar();
    componente.desligar();

    return 0;
}