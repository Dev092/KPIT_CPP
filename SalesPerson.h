#ifndef SALESPERSON_H
#define SALESPERSON_H

#include"Employee.h"
class SalesPerson: public Employee
{
    double salesAmount,commrate;
    public:
    SalesPerson();
    SalesPerson(int id,std::string ename,double sal,double samt,double commrate);
    void display();
    ~SalesPerson();
    double calNetSalary();
};

#endif // SALESPERSON_H
