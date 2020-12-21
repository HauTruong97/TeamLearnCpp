#include "Departerment.h"

using namespace std;

// Default Contructor
Departerment::Departerment(){}
// Contructor with paramaters
Departerment::Departerment(std::string dName, long mgrSSN, std::string mgrStartDate,int dNumber){
    DName = dName;
    MgrSSN = mgrSSN;
    MgrStartDate = mgrStartDate;
    Dnumber=dNumber;
}