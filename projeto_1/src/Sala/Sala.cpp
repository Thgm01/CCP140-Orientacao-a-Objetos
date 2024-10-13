#include "Sala/Sala.hpp"
#include "Sala/utils.hpp"

#include "Atuadores/Lampada/Lampada.hpp"
#include "Atuadores/Desumidificador/Desumidificador.hpp"
#include "Atuadores/Umidificador/Umidificador.hpp"
#include "Atuadores/Ventilador/Ventilador.hpp"

#include "Sensores/Luminosidade/Luminosidade.hpp"
#include "Sensores/Temperatura/Temperatura.hpp"
#include "Sensores/Umidade/Umidade.hpp"

Sala::Sala(int limiarClaridade)
{
  atuadores.push_back(new Lampada(12));
  atuadores.push_back(new Umidificador(12));
  atuadores.push_back(new Desumidificador(12));
  atuadores.push_back(new Ventilador(12));

  sensores.push_back(new Luminosidade(7));
  sensores.push_back(new Umidade(6));
  sensores.push_back(new Temperatura(5));

  ((Luminosidade *)sensores[LUMINOSIDADE])->setLimiarClaridade(limiarClaridade);
}

Sala::~Sala()
{
}

void Sala::atualiza()
{
  if(((Luminosidade *)sensores[LUMINOSIDADE])->estaClaro())
  {
    int limiar = ((Luminosidade *)sensores[LUMINOSIDADE])->getLimiar();
    int valorLido = ((Luminosidade *)sensores[LUMINOSIDADE])->getValor();
    int brilho = int(255.0/(1023 - limiar) * (valorLido - limiar));
    ((Lampada *)atuadores[LAMPADA])->setBrilho(brilho);
  }
  else ((Lampada *)atuadores[LAMPADA])->setBrilho(0); 
}
