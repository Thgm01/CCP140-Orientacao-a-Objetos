#include "Sala/Sala.hpp"

#include <iostream>
#include <unistd.h> // Para a função sleep

int main()
{
    std::cout << "Inicio do programa" << std::endl;
    Sala s1 = Sala(200, 55, 10, 25, 5, 'c', 9);
    while(1)
    {
        s1.atualiza();
        usleep(1e5);
    } 
}
