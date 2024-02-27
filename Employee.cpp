#include "Employee.h"
#include<iostream>
void Employee::claAllownce()
{
    homerent=salary*0.05;
    landTax=salary*0.02;
    otherTax=salary*0.03;
}

Employee::Employee():employeeId(111),employeeName("Raja"),salary(987665)
{
    claAllownce();
}

Employee::Employee(int eid, std::string ename, double sal):
employeeId(eid),employeeName(ename),salary(sal)
{
    claAllownce();
}

double Employee::calNetSalary()
{
    return salary-(homerent+landTax+otherTax);
}

void Employee::display()
{
    std::cout<<employeeId<<" "<<employeeName<<" "<<salary<<std::endl;
}

Employee::~Employee()
{
    std::cout<<"~Employee()"<<std::endl;
}
