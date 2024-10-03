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
        Componente(int pino);
        ~Componente();        

        virtual int ligar();
        bool estaLigado();
        void desligar();
        virtual bool conectar();
        bool estaConectado();
        void desconectar();
        int  getValor();
        int getPino();
        
    
    protected:
        bool ligado = false;
        bool conectado = false;
        int  valor = -1;
        int  pino;
        
        std::string nome;
};

#endif
