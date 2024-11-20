#include "patrimonioList.h"

std::vector<Patrimonio *> getPatrimonioFromFile(std::string filePath)
{

    std::ifstream file(filePath);

    if (!file.is_open())
    {
        std::cerr << "Error trying to open the file with path " << filePath << std::endl;
        return std::vector<Patrimonio *>(1)={NULL};
    }

    std::string line;
    std::vector<Patrimonio *> patrimonioList = std::vector<Patrimonio *>();

    while (std::getline(file, line))
    {
        if(line.size() == 0) break;
        // std::cout << line << std::endl;
        std::stringstream split(line);

        std::string buffer;
        std::getline(split, buffer , ';');
        int id = std::stoi(buffer);
        // std::cout << buffer << std::endl;


        std::getline(split, buffer, ';');
        std::string marca = buffer;
        // std::cout << buffer << std::endl;

        std::getline(split, buffer, ';');
        std::string modelo = buffer;
        // std::cout << buffer << std::endl;

        std::getline(split, buffer, ';');
        std::string descricao = buffer;
        // std::cout << buffer << std::endl;

        std::getline(split, buffer, ';');
        int registerDay = std::stoi(buffer);
        // std::cout << buffer << std::endl;

        std::getline(split, buffer, ';');
        int registerMonth = std::stoi(buffer);
        // std::cout << buffer << std::endl;

        std::getline(split, buffer, ';');
        int registerYear = std::stoi(buffer);
        // std::cout << buffer << std::endl;

        Date registerDate = Date(registerDay, registerMonth, registerYear);

        patrimonioList.push_back(new Patrimonio(id, marca, modelo, descricao, registerDate));
    }
    return patrimonioList;
}

void savePatrimonioFromList(std::vector<Patrimonio *> patrimonios, std::string filePath)
{
    if(patrimonios.size() != 0)
    {
        if(patrimonios[0]==NULL) return;
    }
    else return;

    std::ofstream file(filePath);
    if (!file.is_open())
    {
        std::cerr << "Error trying to open the file with path " << filePath << std::endl;
        return;
    }

    for(Patrimonio *patrimonio : patrimonios)
    {
        int id = patrimonio->getId();
        std::string marca = patrimonio->getMarca();
        std::string modelo = patrimonio->getModelo();
        std::string descricao = patrimonio->getDescricao();
        Date registrationDate = patrimonio->getDataDeEntrada();

        file<<id<<";"<<marca<<";"<<modelo<<";"<<descricao<<";"<<registrationDate.getDay()<<";"<<
            registrationDate.getMonth()<<";"<<registrationDate.getYear()<<"\n";
    }

    file.close();
}


bool alreadyRegistered(Patrimonio &patrimonio, std::vector<Patrimonio *> patrimonioList)
{
    for(Patrimonio *patrimonio_lista : patrimonioList)
    {
        if(patrimonio == *((Patrimonio *) patrimonio_lista))
        {
            std::cout << "Patrimonio already registered" << std::endl;
            return true;
        }
    }
    return false;
}

Patrimonio *findPatrimonio(int id, std::vector<Patrimonio *> patrimonioList)
{
    for(Patrimonio *patrimonio : patrimonioList)
    {
        if(patrimonio->getId() == id) return patrimonio;
    }
    return NULL;
}

