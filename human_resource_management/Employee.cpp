#include "Employee.h"
#include<iostream>
using namespace std;

// Default Contructor
Employee::Employee(){}
// Contructor with paramaters
Employee::Employee(int id, std::string fName, std::string mInit, std::string lName, long ssn, std::string bDate, std::string address, char sex, int salary, long superSSN, int dno){
    Id = id;
    FName = fName;
    MInit = mInit;
    LName = lName;
    SSN = ssn;
    BDate = bDate;
    Address = address;
    Sex = sex;
    Salary = salary;
    SuperSSN = superSSN;
    DNO = dno;
}
