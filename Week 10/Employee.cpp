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
