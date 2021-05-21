/*
Write a c++ program to find out the Square and Cube of a number using hierarchical inheritance ?

Input Format

3 3

Constraints

-

Output Format

Square: 9 Cube: 27

Sample Input 0

3
3
Sample Output 0

Square: 9
Cube: 27
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class A
{
    public:
    int x=3;
    void A_input()
    {
        cin>>x;
    }
};

class B :
public A
{
    public:
    void square()
    {
        cout<<"Square: "<< x * x<<endl;
    }

};

class C :
public A
{
    public:
    void cube()
    {
        cout<<"Cube: "<< x*x*x <<endl;
    }
};

int main()
{
    B b;
    C c;
    b.A_input();
    b.square();
    c.A_input();
    c.cube();
    return 0;
}
    

