#include "Sala/Sala.hpp"
#include "Sala/utils.hpp"

#include "Atuadores/Lampada/Lampada.hpp"
#include "Sensores/Luminosidade/Luminosidade.hpp"

Sala::Sala()
{
  atuadores.push_back(new Lampada(12));
  
  sensores.push_back(new Luminosidade(7));
}

Sala::~Sala()
{
}

void Sala::atualiza()
{
  if(((Luminosidade *)sensores[LUMINOSIDADE])->estaClaro()) ((Lampada *)atuadores[LAMPADA])->setBrilho(255);
  else ((Lampada *)atuadores[LAMPADA])->setBrilho(255);

}
