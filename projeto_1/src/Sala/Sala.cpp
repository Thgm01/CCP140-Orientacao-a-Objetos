#include "Sala/Sala.hpp"
#include "Sala/utils.hpp"

#include "Atuadores/Lampada/Lampada.hpp"
#include "Atuadores/Desumidificador/Desumidificador.hpp"
#include "Atuadores/Umidificador/Umidificador.hpp"
#include "Atuadores/Ventilador/Ventilador.hpp"

#include "Sensores/Luminosidade/Luminosidade.hpp"
#include "Sensores/Temperatura/Temperatura.hpp"
#include "Sensores/Umidade/Umidade.hpp"

Sala::Sala(int limiarClaridade, int mediaUmidade=55, int thUmidade=10)
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
  if(this->ajustando)
  {
    if(((Umidade *)sensores[UMIDADE])->getUmidadeRelativa() > this->mediaUmidade+3)
    {
      ((Desumidificador *)atuadores[DESUMIDIFICADOR])->setValor(1);
    }
    else if(((Umidade *)sensores[UMIDADE])->getUmidadeRelativa() < this->mediaUmidade+3)
    {
      ((Umidificador *)atuadores[UMIDIFICADOR])->setValor(1);
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
    if(((Umidade *)sensores[UMIDADE])->getUmidadeRelativa() > this->mediaUmidade+this->thUmidade ||
       ((Umidade *)sensores[UMIDADE])->getUmidadeRelativa() < this->mediaUmidade-this->thUmidade)
    {
      this->ajustando = true;
    }
  }


}
