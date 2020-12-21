#ifndef _PROJECT_H_
#define _PROJECT_H_
#include <string>
class Project{
    std::string PName;
    std::string PLocation;
    int PNumber;
    int DNum;

public:
    // Default Contructor
    Project();
    // Contructor with paramaters
    Project(std::string pName,std::string pLocation,int pNumber,int dNum);
};
#endif