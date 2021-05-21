/*
a c++ class called 'student' with

Data members:

name(char type),

marks1,marks2 (integer type)

The program asks the user to enter name and marks. Then calc_marks() calculates the media note and disp() display name and total average of mark on screen in different lines.

Input Format

saveetha 85 96

Constraints

-

Output Format

Student Details:
name: saveetha Avg: 90

Sample Input 0

saveetha 85 96
Sample Output 0

Student Details:                                                                                                          
name: saveetha   Avg: 90    
Sample Input 1

sam 75 85
Sample Output 1

Student Details:
name: sam      Avg: 80
*/


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
