#include<iostream>
#include"Employee.h"
#include"SalesPerson.h"
int main()
{
    SalesPerson s1(222,"Dev",20000,10000,0.3);
    s1.display();
    std::cout<<s1.calNetSalary()<<std::endl;
    return 0;
}