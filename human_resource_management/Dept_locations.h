#ifndef _Dept_locations_H_
#define _Dept_locations_H_
#include <string>

class Dept_locations{
    int Dnumber;
    std::string Dlocation;

public:
    // Default Contructor
    Dept_locations();
    // Contructor with paramaters
    Dept_locations(int dNumber,std::string dLocation);
};
#endif