#ifndef _DEPARTERMENT_H_
#define _DEPARTERMENT_H_
#include <string>
class Departerment{
    std::string DName;
    long MgrSSN;
    std::string MgrStartDate;
    int Dnumber;

public:
    // Default Contructor
    Departerment();
    // Contructor with paramaters
    Departerment(std::string dName, long mgrSSN, std::string mgrStartDate,int dNumber);
};
#endif