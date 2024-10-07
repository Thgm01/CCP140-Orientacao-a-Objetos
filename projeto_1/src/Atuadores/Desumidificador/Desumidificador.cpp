#include "Atuadores/Desumidificador/Desumidificador.hpp"

Desumidificador::Desumidificador(int pino) : Atuador(pino)
{
  this->conectar();
  this->nome = "Desumidificador";
}

Desumidificador::~Desumidificador()
{
  this->setValor(0);
}
