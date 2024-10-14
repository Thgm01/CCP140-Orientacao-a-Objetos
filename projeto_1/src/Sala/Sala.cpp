#include "Sala/Sala.hpp"
#include "Sala/utils.hpp"

#include "Atuadores/Lampada/Lampada.hpp"
#include "Atuadores/Desumidificador/Desumidificador.hpp"
#include "Atuadores/Umidificador/Umidificador.hpp"
#include "Atuadores/Ventilador/Ventilador.hpp"

#include "Sensores/Luminosidade/Luminosidade.hpp"
#include "Sensores/Temperatura/Temperatura.hpp"
#include "Sensores/Umidade/Umidade.hpp"

Sala::Sala(int limiarClaridade, int mediaUmidade, int thUmidade,
           int temperaturaDesejada, int thTemperatura, char escalaTemp)
{
  atuadores.push_back(new Lampada(10));
  atuadores.push_back(new Umidificador(18));
  atuadores.push_back(new Desumidificador(12));
  atuadores.push_back(new Ventilador(15));

  sensores.push_back(new Luminosidade(7));
  sensores.push_back(new Umidade(6));
  sensores.push_back(new Temperatura(5));

  ((Luminosidade *)sensores[LUMINOSIDADE])->setLimiarClaridade(limiarClaridade);
  
  this->mediaUmidade = mediaUmidade;
  this->thUmidade = thUmidade;
  this->temperaturaDesejada = temperaturaDesejada;
  this->thUmidade = thUmidade;
  this->escalaTemp = escalaTemp;

  ((Desumidificador *)atuadores[DESUMIDIFICADOR])->setValor(0);
  ((Umidificador *)atuadores[UMIDIFICADOR])->setValor(0);
}

Sala::~Sala()
{
}

void Sala::atualiza()
{
  // Controle da luz
  if(((Luminosidade *)sensores[LUMINOSIDADE])->estaClaro())
  {
    int limiar = ((Luminosidade *)sensores[LUMINOSIDADE])->getLimiar();
    int valorLido = ((Luminosidade *)sensores[LUMINOSIDADE])->getValor();
    int brilho = int(255.0/(1023 - limiar) * (valorLido - limiar));
    ((Lampada *)atuadores[LAMPADA])->setBrilho(brilho);
  }
  else ((Lampada *)atuadores[LAMPADA])->setBrilho(0); 

  // Controle da Umidade
  int umidade = ((Umidade *)sensores[UMIDADE])->getUmidadeRelativa();
  std::cout << "Umidade " << umidade << std::endl;
  if(this->ajustando)
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
      this->ajustando = false;
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
  switch (this->escalaTemp) {
    case 'c':
      temp = ((Temperatura *)sensores[TEMPERATURA])->getTemperaturaEmC();
      break;

    case 'f':
      temp = ((Temperatura *)sensores[TEMPERATURA])->getTemperaturaEmF();
      break;

    case 'k':
      temp = ((Temperatura *)sensores[TEMPERATURA])->getTemperaturaEmK();
      break;
  }

  if(this->ajustandoTemperatura)
  {
    
    if(this->temperaturaDesejada > temp)
    {
      ((Ventilador *)atuadores[VENTILADOR])->setVelocidade(255);
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
