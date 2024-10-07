#include "Atuadores/Umidificador/Umidificador.hpp"

Umidificador::Umidificador(int pino) : Atuador(pino)
{
  this->conectar();
  this->nome = "Umidificador";
}

Umidificador::~Umidificador()
{
  this->setValor(0);
}


