#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int sum(int, int);
float sum(float, float);
float sum(int, float);
int main()
{
   int num1, num2;
   float num3, num4;
   cin>>num1>>num2;
   cout<<"Int: "<<sum(num1, num2)<< endl;
   cin>>num3>>num4;
   cout<<"Double: " <<sum(num3, num4)<< endl;
}
int sum(int a, int b)
{
   return a+b;
}
float sum(float a, float b)
{
   return a+b;
}
