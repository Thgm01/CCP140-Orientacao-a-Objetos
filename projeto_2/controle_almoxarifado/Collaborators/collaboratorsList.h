#ifndef COLLABORATORS_LIST_H
#define COLLABORATORS_LIST_H

#include <vector>
#include <stdio.h>
#include <fstream>
#include <sstream>

#include "Person/person.h"
#include "Student/student.h"
#include "Employee/employee.h"
#include "utils.h"
#include "../Patrimonio/patrimonioList.h"

std::vector<Person *> getCollaboratorsFromFile(std::string filePath);
void getLoanDataFromFile(std::vector<Person *> collaborators, std::vector<Patrimonio *> patrimonioList, std::string filePath);
void saveCollaboratorsFromList(std::vector<Person *> collaborators, std::string filePath);
bool alreadyRegistered(Student &student, std::vector<Person *> collaboratorList);
bool alreadyRegistered(Employee &employee, std::vector<Person *> collaboratorList);
Person *findPerson(std::string registrationNumber, std::vector<Person *>collaboratorList);

#endif //COLLABORATORS_LIST_H
