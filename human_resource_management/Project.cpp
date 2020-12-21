#include "Project.h"

// Default Contructor
Project::Project(){};
// Contructor with paramaters
Project::Project(std::string pName,std::string pLocation,int pNumber,int dNum){
PName=pName;
PLocation=pLocation;
PNumber=pNumber;
DNum=dNum;
}