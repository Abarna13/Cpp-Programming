/*
Write a C++ program for Employee management software for an organization. Consider RaiseSalary() and Promote() function as virtual function in Employee class(Base class). Specify the common salary raise of 1000 in RaiseSalary() and a promote code as 101 in Promote() in Employee class. Inherit a Manager class and apply the logic that Managers receive 30% increase from salary in RaiseSalary() and the promote code as 102 in Promote(). Display the salary for normal Employee, Managers and also the promote code of Manager.Access the memeber function by creating the reference pointer for Base class.

Input Format

-

Constraints

-

Output Format

-

Sample Input 0

5000
Sample Output 0

Common salary raise is 6000                                                                                                 
Salary of managers 6500                                                                                                     
Promote code is 102
*/



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Employee
{
    public:
    int sal;
    virtual void RaiseSalary(int sal)
    {
        cout<<"Common salary raise is "<<sal+1000<<endl;
    }
    virtual void Promote()
    {
        cout<<"Code is 101"<<endl;
    }
};

class Manager : public Employee
{
    public:
    int salary;
    void RaiseSalary(int s)
    {
        salary = s;
        Employee::RaiseSalary(salary);
        cout<<"Salary of managers "<<salary*1.30<<endl;
    }
    void Promote()
    {
        cout<<"Promote code is 102"<<endl;
    }
};

int main() 
{
    int s1;
    cin>>s1;
    Manager obj;
    obj.RaiseSalary(s1);
    obj.Promote();
    return 0;
}
