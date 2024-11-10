#ifndef UTILS_MAINWINDOW_H
#define UTILS_MAINWINDOW_H

#include "qlabel.h"
#include <string>


bool nameIsValid(std::string name, QLabel *nameLabel)
{
    if(name.size() < 5)
    {
        nameLabel->setStyleSheet("background-color: rgba(255, 0, 0,255)");
        return false;
    }

    nameLabel->setStyleSheet("background-color: rgba(0, 0, 0,0)");
    return true;
}

bool phoneIsValid(std::string phone, QLabel *phoneLabel)
{
    if(phone.size() < 9)
    {
        phoneLabel->setStyleSheet("background-color: rgba(255, 0, 0,255)");
        return false;
    }

    phoneLabel->setStyleSheet("background-color: rgba(0, 0, 0,0)");
    return true;
}

bool emailIsValid(std::string email, QLabel *emailLabel)
{
    if(email.size() < 11)
    {
        emailLabel->setStyleSheet("background-color: rgba(255, 0, 0,255)");
        return false;
    }

    emailLabel->setStyleSheet("background-color: rgba(0, 0, 0,0)");
    return true;
}

bool raIsValid(std::string ra, QLabel *raLabel)
{
    if(ra.size() != 9)
    {
        raLabel->setStyleSheet("background-color: rgba(255, 0, 0,255)");
        return false;
    }

    raLabel->setStyleSheet("background-color: rgba(0, 0, 0,0)");
    return true;
}

bool idIsValid(int id, QLabel *idLabel)
{
    if( id / 1000 <= 0) //tem que ter mais de 4 digitos
    {
        idLabel->setStyleSheet("background-color: rgba(255, 0, 0,255)");
        return false;
    }

    idLabel->setStyleSheet("background-color: rgba(0, 0, 0,0)");
    return true;
}

bool patrimonioInfoIsValid(std::string infoPatrimonio, QLabel *infoLabel)
{
    if(infoPatrimonio.size() < 3)
    {
        infoLabel->setStyleSheet("background-color: rgba(255, 0, 0,255)");
        return false;
    }

    infoLabel->setStyleSheet("background-color: rgba(0, 0, 0,0)");
    return true;
}

#endif // UTILS_MAINWINDOW_H
