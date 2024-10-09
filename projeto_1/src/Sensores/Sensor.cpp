#include "Sensores/Sensor.hpp"

#include <iostream>
#include <pigpio.h>

Sensor::Sensor(int pino) : Componente(pino)
{
  this->conectar();
}

Sensor::~Sensor()
{
}

bool Sensor::conectar()
{
  if (gpioInitialise() < 0) {
    std::cerr << "Falha ao iniciar pigpio!" << std::endl;
    this->conectado = false;
    return false;
  }

  int spi_handle = spiOpen(0, 1e6, 0);
  if (spi_handle < 0) {
    std::cerr << "Falha ao abrir a interface SPI!" << std::endl;
    this->conectado = false;
    return false;
  } 

  std::cout << "Pigpio e SPI iniciado com sucesso" << std::endl;
  this->conectado = true;
  return true;
}

bool Sensor::getValor()
{
  int adcValue = this->readAdc();
  this->valor = adcValue;
  std::cout << "valor lido: " << this->valor << std::endl;
}

int Sensor::readAdc()
{
  if (this->getPino() < 0 || this->getPino() > 7) {
    std::cerr << "Canal ADC inválido: " << this->getPino() << std::endl;
    return -1;
  }

  uint8_t tx[3], rx[3];

  tx[0] = 1;  // Start bit
  tx[1] = (8 + this->getPino()) << 4;  // Configurar para o canal (shift para alinhar)
  tx[2] = 0; // Dummy byte para receber resposta

  spiXfer(0, (char*)tx, (char*)rx, 3);

  int value = ((rx[1] & 0x0F) << 8) | rx[2];

  return value;
}
