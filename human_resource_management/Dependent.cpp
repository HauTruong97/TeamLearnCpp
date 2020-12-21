#include "Dependent.h"

Dependent::Dependent(){}
Dependent::Dependent(long eSSN,std::string depndentName,char sex,std::string bDate,std::string relationShip){
    ESSN=eSSN;
    DepndentName=depndentName;
    Sex=sex;
    BDate=bDate;
    Relationship=relationShip;
}