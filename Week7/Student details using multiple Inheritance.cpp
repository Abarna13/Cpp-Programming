#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class student 
{
    public:
    int rno=23456;
    int m1=25;
    int m2=98;
};

class sports
{
    public:
    int sm=98; 

};

class statement :
public student, public sports
{
    int tot, avg;
    public:
    void display()
    {
        tot = (m1 + m2 + sm);
        avg = tot / 3;
        cout << "Roll No : " << rno << "\n\nTotal : " << tot;
        cout << "\n\nAverage : " << avg;

    }

};

int main()
{
    statement obj;
    obj.display();
    return 0;
}
    