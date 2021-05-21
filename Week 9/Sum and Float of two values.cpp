/*
Write a c++ program to find the Sum and float of two values using function overloading (NOTE:Function arguments are of different data type)

Input Format

8 5 4.3 6.26

Constraints

-

Output Format

Int: 13 Double: 10.56

Sample Input 0

8 5 4.3 6.26
Sample Output 0

Int: 13
Double: 10.56
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int sum(int, int);
float sum(float, float);
int main()
{
    int a, b;
    float c, d;
    cin>>a>>b;
    cout<<"Int: "<<sum(a, b)<< endl;
    cin>>c>>d;
    cout<<"Double: " <<sum(c, d)<< endl;
}

int sum(int a, int b)
{
    return a+b;
}

float sum(float a, float b)
{
   return a+b;
}

