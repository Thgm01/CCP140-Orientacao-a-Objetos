/**
 * @file student.h
 * @author Thiago M. (thiago.tmoura01@gmail.com)
 * @brief Base class for a student object
 * @date 2024-10-24
 */

#ifndef STUDENT_H
#define STUDENT_H

#include <array>
#include <vector>

#include "Date/date.h"
#include "../Person/person.h"
#include "../utils.h"
#include "../../Patrimonio/patrimonio.h"

/**
 * @brief Class that represents a Student
 * 
 */

class Student : public Person
{
public:

    /**
     * @brief Construct a new Student object
     * 
     * @param name 
     * @param birthdayDate 
     * @param gender 
     * @param phone 
     * @param email 
     * @param registrationNum Student's RA
     * @param registrationDate Day when student was registered
     * @param course 
     * @param semester 
     * @param status Status of student in warehouse
     */
    Student(std::string name, Date birthdayDate, char gender,
            std::string phone, std::string email,
            std::string registrationNum, Date registrationDate,
            Course course, int semester, Status status);

    
    //   ____      _   _                
    //  / ___| ___| |_| |_ ___ _ __ ___ 
    // | |  _ / _ \ __| __/ _ \ '__/ __|
    // | |_| |  __/ |_| ||  __/ |  \__ \ 
    //  \____|\___|\__|\__\___|_|  |___/

    /**
     * @brief Get the Registration Num object
     * 
     * @return std::string RA
     */
    std::string getRegistrationNum();

    /**
     * @brief Get the Registration Date object
     * 
     * @return std::array<int, 3> [day, month, year]
     */
    std::array<int, 3> getRegistrationDate();

    /**
     * @brief Get the Course object
     * 
     * @return Course 
     */
    Course getCourse();

    /**
     * @brief Get the Semester object
     * 
     * @return int 
     */
    int getSemester();

    /**
     * @brief Get the Status object
     * 
     * @return Status status of student in warehouse
     */
    Status getStatus();

    /**
     * @brief Get the Registration Number object
     * 
     * @param registrationNum Student's RA
     */
    void getRegistrationNum(std::string registrationNum);

    //  ____       _   _
    // / ___|  ___| |_| |_ ___ _ __ ___
    // \___ \ / _ \ __| __/ _ \ '__/ __|
    //  ___) |  __/ |_| ||  __/ |  \__ \
    // |____/ \___|\__|\__\___|_|  |___/

    /**
     * @brief Set the Course object
     * 
     * @param course 
     */
    void setCourse(Course course);

    /**
     * @brief Set the Semester object
     * 
     * @param semester 
     */
    void setSemester(int semester);

    /**
     * @brief Set the Status object
     * 
     * @param status 
     */
    void setStatus(Status status);

    //   ___  _   _
    //  / _ \| |_| |__   ___ _ __ ___
    // | | | | __| '_ \ / _ \ '__/ __|
    // | |_| | |_| | | |  __/ |  \__ \
    //  \___/ \__|_| |_|\___|_|  |___/

    bool operator==(const Student &student);

    void registerPatrimonioLoan(std::vector<Patrimonio *> patrimonioList, const int &patrimonioId);

    void loanedPatrimonioReturned(const int &patrimonioId);

    std::vector<Patrimonio *> getLoanedPatrimonio();
    
private:
    std::string registrationNum;
    Date        registrationDate;
    Course      course;
    int         semester;
    Status      status;
    std::vector<Patrimonio *> patrimoniosInLoan;
};

#endif // STUDENT_H
