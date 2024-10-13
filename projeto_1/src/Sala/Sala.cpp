#include "Sala/Sala.hpp"
#include "Sala/utils.hpp"

#include "Atuadores/Lampada/Lampada.hpp"
#include "Atuadores/Desumidificador/Desumidificador.hpp"
#include "Atuadores/Umidificador/Umidificador.hpp"
#include "Atuadores/Ventilador/Ventilador.hpp"

#include "Sensores/Luminosidade/Luminosidade.hpp"
#include "Sensores/Temperatura/Temperatura.hpp"
#include "Sensores/Umidade/Umidade.hpp"

Sala::Sala()
{
  atuadores.push_back(new Lampada(12));
  atuadores.push_back(new Umidificador(12));
  atuadores.push_back(new Desumidificador(12));
  atuadores.push_back(new Ventilador(12));

  sensores.push_back(new Luminosidade(7));
  sensores.push_back(new Umidade(6));
  sensores.push_back(new Temperatura(5));
}

Sala::~Sala()
{
}

void Sala::atualiza()
{
  if(((Luminosidade *)sensores[LUMINOSIDADE])->estaClaro())
  {
    std::cout << ((Luminosidade *)sensores[LUMINOSIDADE])->getValor() << std::endl;
    ((Lampada *)atuadores[LAMPADA])->setBrilho(255);
  }
  else ((Lampada *)atuadores[LAMPADA])->setBrilho(0);
  
}
