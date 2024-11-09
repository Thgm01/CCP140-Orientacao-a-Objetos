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

std::vector<Person *> getCollaboratorsFromFile(std::string filePath);
void saveCollaboratorsFromList(std::vector<Person *> collaborators, std::string filePath);

#endif //COLLABORATORS_LIST_H
