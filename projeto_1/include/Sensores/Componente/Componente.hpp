/**
 * @file Componente.hpp
 * @author Thiago M. (thiago.tmoura01@gmail.com)
 * @brief Classe base de um componente eletronico utilizado em sensores
 * @version 0.1
 * @date 2024-09-23
 * 
 * @copyright Copyright (c) 2024
 * 
 */


#ifndef COMPONENTE_H
#define COMPONENTE_H

#include <string>

class Componente
{
    public:
        Componente();
        
        void ligar();
        void desligar();
        bool conectar();
        void desconectar();
        int  getValor();
    
    private:
        bool ligado;
        bool conectado;
        int  valor = -1;
        std::string nome;
};

#endif