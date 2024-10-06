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
        /**
         * @brief Classe construtora do Componente
         * 
         * Define a seed para numeros randomicos e recebe 
         * qual o valor do atributo pino.
         * 
         * @param pino Qual pino do Raspberry Pi quer usar 
         */
        Componente(int pino);
        ~Componente();        

        virtual bool conectar();
        void desconectar();
        virtual int ligar();
        void desligar();
        
        //Getters 
        bool getLigado();
        bool getConectado();
        int  getValor();
        int  getPino();
        
    private:
        int  pino;

    protected:
        bool ligado = false;
        bool conectado = false;
        int  valor = -1;
        std::string nome;
};

#endif
