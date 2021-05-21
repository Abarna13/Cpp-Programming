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

