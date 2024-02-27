#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<string>
class Employee{
    int employeeId;
    std::string employeeName;
    double salary;
    double homerent,landTax,otherTax;
    void claAllownce();
    public:
    Employee();
    Employee(int eid,std::string ename,double sal);
    double calNetSalary();
    void display();
    ~Employee();

};

#endif // EMPLOYEE_H
