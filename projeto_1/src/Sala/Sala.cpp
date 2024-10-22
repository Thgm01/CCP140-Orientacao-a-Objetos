#include "Sala/Sala.hpp"
#include "Sala/utils.hpp"

#include "Atuadores/Lampada/Lampada.hpp"
#include "Atuadores/Desumidificador/Desumidificador.hpp"
#include "Atuadores/Umidificador/Umidificador.hpp"
#include "Atuadores/Ventilador/Ventilador.hpp"

#include "Sensores/Luminosidade/Luminosidade.hpp"
#include "Sensores/Temperatura/Temperatura.hpp"
#include "Sensores/Umidade/Umidade.hpp"

#include <ctime>

Sala::Sala(int limiarClaridade, int mediaUmidade, int thUmidade,
           int temperaturaDesejada, int thTemperatura, char escalaTemp, int horaAtivacao)
{
  atuadores.push_back(new Lampada(12));
  atuadores.push_back(new Umidificador(16));
  atuadores.push_back(new Desumidificador(26));
  atuadores.push_back(new Ventilador(18));

  sensores.push_back(new Luminosidade(7));
  sensores.push_back(new Umidade(6));
  sensores.push_back(new Temperatura(5));

  ((Luminosidade *)sensores[LUMINOSIDADE])->setLimiarClaridade(limiarClaridade);
  
  this->mediaUmidade = mediaUmidade;
  this->thUmidade = thUmidade;
  this->temperaturaDesejada = temperaturaDesejada;
  this->thTemperatura = thTemperatura;
  this->escalaTemp = escalaTemp;

  ((Desumidificador *)atuadores[DESUMIDIFICADOR])->setValor(0);
  ((Umidificador *)atuadores[UMIDIFICADOR])->setValor(0);

  this->horaAtivacao = horaAtivacao;
}

Sala::~Sala()
{
}

void Sala::atualiza()
{
  std::time_t now = std::time(nullptr);
  std::tm* horaAtual = std::localtime(&now); 
  if(horaAtual->tm_hour > this->horaAtivacao)
  {
    // Controle da luz
    if(((Luminosidade *)sensores[LUMINOSIDADE])->estaClaro())
    {
      ((Lampada *)atuadores[LAMPADA])->setBrilho(0); 
    }
    else
    {
      int limiar = ((Luminosidade *)sensores[LUMINOSIDADE])->getLimiar();
      int valorLido = ((Luminosidade *)sensores[LUMINOSIDADE])->getValor();
      std::cout << "Luminosidade " << valorLido << std::endl;
      int brilho = int(255.0/(1023 - limiar) * (valorLido - limiar));
      ((Lampada *)atuadores[LAMPADA])->setBrilho(brilho);
    }

    // Controle da Umidade
    int umidade = ((Umidade *)sensores[UMIDADE])->getUmidadeRelativa();
    std::cout << "Umidade " << umidade << std::endl;
    if(this->ajustandoUmidade)
    {
      if(umidade > this->mediaUmidade+3)
      {
        ((Desumidificador *)atuadores[DESUMIDIFICADOR])->setValor(1);
        ((Umidificador *)atuadores[UMIDIFICADOR])->setValor(0);
      }
      else if(umidade < this->mediaUmidade-3)
      {
        ((Umidificador *)atuadores[UMIDIFICADOR])->setValor(1);
        ((Desumidificador *)atuadores[DESUMIDIFICADOR])->setValor(0);
      }
      else
      {
        ((Desumidificador *)atuadores[DESUMIDIFICADOR])->setValor(0);
        ((Umidificador *)atuadores[UMIDIFICADOR])->setValor(0);
        this->ajustandoUmidade = false;
      } 
    }
    else
    {
      if(umidade > this->mediaUmidade+this->thUmidade ||
        umidade < this->mediaUmidade-this->thUmidade)
      {
        ((Desumidificador *)atuadores[DESUMIDIFICADOR])->setValor(0);
        ((Umidificador *)atuadores[UMIDIFICADOR])->setValor(0);
        this->ajustandoUmidade = true;
      }
    }

    // Controle de Temperatura
    int temp;
    int maxTemp;
    switch (this->escalaTemp) {
      case 'c':
        temp = ((Temperatura *)sensores[TEMPERATURA])->getTemperaturaEmC();
        maxTemp = 50;
        break;

      case 'f':
        temp = ((Temperatura *)sensores[TEMPERATURA])->getTemperaturaEmF();
        maxTemp = 50 + 273;
        break;

      case 'k':
        temp = ((Temperatura *)sensores[TEMPERATURA])->getTemperaturaEmK();
        maxTemp = 122;
        break;
    }
    std::cout << "Temperatura: " << temp << std::endl;

    if(this->ajustandoTemperatura)
    {
      
      if(this->temperaturaDesejada < temp)
      {
        int velocidade = int(255.0 / (maxTemp - this->temperaturaDesejada) * (temp - this->temperaturaDesejada));
        ((Ventilador *)atuadores[VENTILADOR])->setVelocidade(velocidade);
      }
      else
      {
        ((Ventilador *)atuadores[VENTILADOR])->setVelocidade(0);
        this->ajustandoTemperatura = false;
      }
    }
    else
    {
      if(temp > this->temperaturaDesejada+this->thTemperatura)
      {
        this->ajustandoTemperatura = true; 
      }
    }
  }
  std::cout << std::endl;
}
