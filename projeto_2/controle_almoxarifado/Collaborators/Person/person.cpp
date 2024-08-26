#include "person.h"

Person::Person(std::string name, Date birthdayDate, char gender)
{
    this->name = name;
    this->birthdayDate = birthdayDate;
    this->gender = gender;
}

std::string Person::getName()
{
    return this->name;
}

std::array<int, 3> Person::getBirthdayDate()
{
    return this->birthdayDate.getDate();
}

std::string Person::getGender()
{
    switch (this->gender)
    {
    case 'm':
        return "Masculino";

    case 'f':
        return "Feminino";

    default:
        return "Não Especificado";
    };
}

int Person::getAge() //fazer essa função
{
    return 0;
}

void Person::setName(std::string name)
{
    this->name = name;
}

void Person::setBirthdayDate(Date birthdayDate) //fazer validação de data
{
    this->birthdayDate = birthdayDate;
}

void Person::setGender(char gender) //Ver de colocar uma verificação
{
    this->gender = gender;
}
