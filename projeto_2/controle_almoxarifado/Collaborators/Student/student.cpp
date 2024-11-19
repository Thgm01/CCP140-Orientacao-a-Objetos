#include "student.h"

Student::Student(std::string name, Date birthdayDate, char gender,
                 std::string phone, std::string email,
                 std::string registrationNum, Date registrationDate,
                 Course course, int semester, Status status = Status::Ok) : Person(name, birthdayDate, gender, phone, email)
{
    this->registrationNum   = registrationNum;
    this->registrationDate  = registrationDate;
    this->course            = course;
    this->semester          = semester;
    this->status            = status;
}


//   ____      _   _
//  / ___| ___| |_| |_ ___ _ __ ___
// | |  _ / _ \ __| __/ _ \ '__/ __|
// | |_| |  __/ |_| ||  __/ |  \__ \
//  \____|\___|\__|\__\___|_|  |___/

std::string Student::getRegistrationNum()
{
    return this->registrationNum;
}

std::array<int, 3> Student::getRegistrationDate()
{
    return this->registrationDate.getDate();
}

Course Student::getCourse()
{
    return this->course;
}

int Student::getSemester()
{
    return this->semester;
}

Status Student::getStatus()
{
    return this->status;
}

//  ____       _   _
// / ___|  ___| |_| |_ ___ _ __ ___
// \___ \ / _ \ __| __/ _ \ '__/ __|
//  ___) |  __/ |_| ||  __/ |  \__ \
// |____/ \___|\__|\__\___|_|  |___/


void Student::getRegistrationNum(std::string registrationNum)
{
    this->registrationNum = registrationNum;
}

void Student::setCourse(Course course)
{
    this->course = course;
}

void Student::setSemester(int semester)
{
    if(semester > 12 || semester < 1 )
    {
        std::cout << "Invalid semester! Setting 1° semester" << std::endl;
        this->semester = 1;
    }
    else this->semester = semester;
}

void Student::setStatus(Status status)
{
    this->status = status;
}


//   ___  _   _
//  / _ \| |_| |__   ___ _ __ ___
// | | | | __| '_ \ / _ \ '__/ __|
// | |_| | |_| | | |  __/ |  \__ \
//  \___/ \__|_| |_|\___|_|  |___/

bool Student::operator==(const Student &student)
{
    return (this->registrationNum.compare(student.registrationNum) == 0);
}

void Student::registerPatrimonioLoan(std::vector<Patrimonio *> patrimonioList, const int &patrimonioId)
{
    for(Patrimonio *patrimonio : patrimonioList)
    {
        if(patrimonio->getId() == patrimonioId)
        {
            this->patrimoniosInLoan.push_back(patrimonio);
            std::cout << "Patrimonio loaned to " << this->getName() << std::endl;
            return;
        }
    }
    std::cout << "Patrimonio not founded" << std::endl;
}

void Student::loanedPatrimonioReturned(const int &patrimonioId)
{
    for(int i=0; i<this->patrimoniosInLoan.size(); i++)
    {
        if(this->patrimoniosInLoan[i]->getId() == patrimonioId)
        {
            this->patrimoniosInLoan.erase(this->patrimoniosInLoan.begin()+i);
            std::cout << "Patrimonio Returned." << std::endl;
            return;
        }
    }
    std::cout << "Patrimonio not founded" << std::endl;
}
