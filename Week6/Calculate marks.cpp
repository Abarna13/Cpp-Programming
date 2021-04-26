#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class student
{
    char name[20];
    int marks1;
    int marks2;
    public:
    int calc_marks()
    {
        int avg;
        avg=(marks1+marks2)/2;
        return avg;
    }
    void disp(char* name,int a,int b)
    {
        marks1=a;
        marks2=b;
        cout<<"Student Details:"<<endl;
        cout<<"name: "<<name<<"   "<<"Avg: "<<calc_marks();
    }

};

int main()
{
    int a,b;
    char ch[20];
    student s;
    cin>>ch>>a>>b;
    s.disp(ch,a,b);
    return 0;
}