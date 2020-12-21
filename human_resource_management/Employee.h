#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_
#include <string>
class Employee{
    int Id; //id is increasing number
    std::string FName, MInit, LName; // first and last name of employee
    long SSN; // security number of manager 
    std::string BDate, Address; // Date of birth of employee
    char Sex;
    int Salary; // Salary of employee
    long SuperSSN; //security super number of manager 
    int DNO;

public:
    // Default Contructor
    Employee();
    // Contructor with paramaters
    Employee(int id, std::string fName, std::string mInit, std::string lName, long ssn, std::string bDate, std::string address, char sex, int salary, long superSSN, int dno);
};
#endif