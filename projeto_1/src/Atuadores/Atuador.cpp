#include "Atuadores/Atuador.hpp"

#include <pigpio.h>

Atuador::Atuador(int pino) : Componente(pino)
{
}

Atuador::~Atuador()
{
}

bool Atuador::conectar()
{
  if(gpioInitialise() < 0)
  {
    std::cerr << "Falha ao iniciar" << std::endl;
    this->conectado = false;
    return false;
  }

  std::cout << "Iniciado com sucesso" << std::endl;
  
  gpioSetMode(this->getPino(), PI_OUTPUT);
  this->conectado = true;
  return true;
}

bool Atuador::setValor(int valor)
{
  if(this->conectado)
  {
    if(valor == 0)      this->desligar();
    else if(valor == 1) this->ligar();
    else
    {
      std::cout << "Valor Inválido";
      return false;
    }
  
    gpioWrite(this->getPino(), this->valor);
    std::cout << "Pino " << this->getPino() << " com valor " << this->valor << std::endl;
    return true;
  }

  std::cout << "Não está conectado" << std::endl;
  return false;
}
