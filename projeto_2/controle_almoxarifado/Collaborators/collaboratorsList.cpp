#include "collaboratorsList.h"


std::vector<Person *> getCollaboratorsFromFile(std::string filePath)
{

    std::ifstream file(filePath);

    if (!file.is_open())
    {
        std::cerr << "Error trying to open the file with path " << filePath << std::endl;
        return std::vector<Person *>(1)={NULL};
    }

    std::string line;
    std::vector<Person *> collaboratorsList = std::vector<Person *>();

    while (std::getline(file, line))
    {
        if(line.size() == 0) break;
        // std::cout << line << std::endl;
        std::stringstream split(line);

        std::string buffer;
        std::getline(split, buffer , ';');
        char typeCadastro = buffer[0];
        // std::cout << buffer << std::endl;

        std::getline(split, buffer, ';');
        std::string registerName = buffer;
        // std::cout << buffer << std::endl;

        std::getline(split, buffer, ';');
        int birthdayDay = std::stoi(buffer);
        // std::cout << buffer << std::endl;

        std::getline(split, buffer, ';');
        int birthdayMonth = std::stoi(buffer);
        // std::cout << buffer << std::endl;

        std::getline(split, buffer, ';');
        int birthdayYear = std::stoi(buffer);
        // std::cout << buffer << std::endl;

        Date birthdayDate = Date(birthdayDay, birthdayMonth, birthdayYear);

        std::getline(split, buffer, ';');
        char gender = buffer[0];
        // std::cout << buffer << std::endl;

        std::getline(split, buffer, ';');
        std::string phone = buffer;
        // std::cout << buffer << std::endl;

        std::getline(split, buffer, ';');
        std::string email = buffer;
        // std::cout << buffer << std::endl;

        std::getline(split, buffer, ';');
        std::string RA = buffer;
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

        if(typeCadastro == 's')
        {
            std::getline(split, buffer, ';');
            Course course = static_cast<Course>(std::stoi(buffer));
            // std::cout << buffer << std::endl;

            std::getline(split, buffer, ';');
            int semester = std::stoi(buffer);
            // std::cout << buffer << std::endl;

            std::getline(split, buffer, ';');
            Status status = static_cast<Status>(std::stoi(buffer));
            // std::cout << buffer << std::endl;

            collaboratorsList.push_back(new Student(registerName, birthdayDate, gender, phone, email, RA, registerDate, course, semester, status));
        }
        else
        {
            std::getline(split, buffer, ';');
            Position position = static_cast<Position>(std::stoi(buffer));
            // std::cout << buffer << std::endl;

            std::getline(split, buffer, ';');
            Status status = static_cast<Status>(std::stoi(buffer));
            // std::cout << buffer << std::endl;

            collaboratorsList.push_back(new Employee(registerName, birthdayDate, gender, phone, email, RA, registerDate, position, status));
        }
    }
    return collaboratorsList;
}

void saveCollaboratorsFromList(std::vector<Person *> collaborators, std::string filePath)
{
    if(collaborators.size() != 0)
    {
        if(collaborators[0]==NULL) return;
    }
    else return;

    std::ofstream file(filePath);
    if (!file.is_open())
    {
        std::cerr << "Error trying to open the file with path " << filePath << std::endl;
        return;
    }

    for(int i=0; i<int(collaborators.size()); i++)
    {
        if(dynamic_cast<Student *>(collaborators[i]))
        {
            char type='s';
            std::string name = ((Student *)collaborators[i])->getName();
            std::array<int, 3> birthdayDate = ((Student *)collaborators[i])->getBirthdayDate();
            char gender = ((Student *)collaborators[i])->getGender();
            std::string phone = ((Student *)collaborators[i])->getPhone();
            std::string email = ((Student *)collaborators[i])->getEmail();
            std::string ra = ((Student *)collaborators[i])->getRegistrationNum();
            std::array<int, 3> registrationDate = ((Student *)collaborators[i])->getRegistrationDate();
            int course = static_cast<int>(((Student *)collaborators[i])->getCourse());
            int semester = ((Student *)collaborators[i])->getSemester();
            int status = static_cast<int>(((Student *)collaborators[i])->getStatus());

            file<<type<<";"<<name<<";"<<birthdayDate[0]<<";"<<birthdayDate[1]<<";"<<birthdayDate[2]<<";"<<gender<<";"<<
                phone<<";"<<email<<";"<<ra<<";"<<registrationDate[0]<<";"<<registrationDate[1]<<";"<<registrationDate[2]
                <<";"<<course<<";"<<semester<<";"<<status<<"\n";
        }
        else
        {
            char type='e';

            std::string name = ((Employee *)collaborators[i])->getName();
            std::array<int, 3> birthdayDate = ((Employee *)collaborators[i])->getBirthdayDate();
            char gender = ((Employee *)collaborators[i])->getGender();
            std::string phone = ((Employee *)collaborators[i])->getPhone();
            std::string email = ((Employee *)collaborators[i])->getEmail();
            std::string ra = ((Employee *)collaborators[i])->getRegistrationNum();
            std::array<int, 3> registrationDate = ((Employee *)collaborators[i])->getRegistrationDate();
            int position = static_cast<int>(((Employee *)collaborators[i])->getPosition());
            int status = static_cast<int>(((Employee *)collaborators[i])->getStatus());

            file<<type<<";"<<name<<";"<<birthdayDate[0]<<";"<<birthdayDate[1]<<";"<<birthdayDate[2]<<";"<<gender<<";"<<
                phone<<";"<<email<<";"<<ra<<";"<<registrationDate[0]<<";"<<registrationDate[1]<<";"<<registrationDate[2]
                 <<";"<<position<<";"<<status<<"\n";
        }
    }

    file.close();
}

bool alreadyRegistered(Student &student, std::vector<Person *> collaboratorList)
{
    for(Person *collaborator : collaboratorList)
    {
        if(dynamic_cast<Student *>(collaborator))
        {
            if(student == *((Student *) collaborator))
            {
                std::cout << "Student already registered" << std::endl;
                return true;
            }
        }
    }
    return false;
}

bool alreadyRegistered(Employee &employee, std::vector<Person *> collaboratorList)
{
    for(Person *collaborator : collaboratorList)
    {
        if(dynamic_cast<Employee *>(collaborator))
        {
            if(employee == *((Employee *) collaborator))
            {
                std::cout << "Employee already registered" << std::endl;
                return true;
            }
        }
    }
    return false;
}
