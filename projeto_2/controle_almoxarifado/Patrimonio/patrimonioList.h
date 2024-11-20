#ifndef PATRIMONIO_LIST
#define PATRIMONIO_LIST

#include <vector>
#include <fstream>
#include <sstream>

#include "patrimonio.h"

std::vector<Patrimonio *> getPatrimonioFromFile(std::string filePath);
void savePatrimonioFromList(std::vector<Patrimonio *> patrimonios, std::string filePath);
bool alreadyRegistered(Patrimonio &patrimonio, std::vector<Patrimonio *> patrimonioList);
Patrimonio *findPatrimonio(int id, std::vector<Patrimonio *> patrimonioList);

#endif // PATRIMONIO_LIST
