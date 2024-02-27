#include "SalesPerson.h"
#include<iostream>
SalesPerson::SalesPerson():salesAmount(99798),commrate(0.5)
{
}

SalesPerson::SalesPerson(int id, std::string ename, double sal, double samt, double crate)
:Employee(id,ename,sal),salesAmount(samt),commrate(crate)
{
}

void SalesPerson::display()
{
    Employee::display();
    std::cout<<"Sales amount="<<salesAmount<<std::endl;
    std::cout<<"commetion rate="<<commrate<<std::endl;
}

SalesPerson::~SalesPerson()
{
    std::cout<<"~SalesPerson"<<std::endl;
}

double SalesPerson::calNetSalary()
{
    return Employee::calNetSalary()+salesAmount*commrate;
}
