#include "person.h"

Person::Person(std::string name, Date birthdayDate, char gender)
{
    this->name = name;
    this->birthdayDate = birthdayDate;
    this->gender = gender;
}


//   ____      _   _                
//  / ___| ___| |_| |_ ___ _ __ ___ 
// | |  _ / _ \ __| __/ _ \ '__/ __|
// | |_| |  __/ |_| ||  __/ |  \__ \ 
//  \____|\___|\__|\__\___|_|  |___/

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

int Person::getAge()
{
    Date today = Date();
    int age = today.diffYears(Date());
    return age;
}

std::string Person::getPhone()
{
    return this->phone;
}

std::string Person::getEmail()
{
    return this->email;
}

//  ____       _   _                
// / ___|  ___| |_| |_ ___ _ __ ___ 
// \___ \ / _ \ __| __/ _ \ '__/ __|
//  ___) |  __/ |_| ||  __/ |  \__ \
// |____/ \___|\__|\__\___|_|  |___/

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

void Person::setPhone(std::string phone)
{
    this->phone = phone;
}

void Person::setEmail(std::string email)
{
    this->email = email;
}