#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c){
        cout<<"This is an equilateral triangle.";
    }
    else if(a==b || b==c){
        cout<<"This is an isosceles triangle.";
    }
    else if(a!=b && b!=c){
        cout<<"This is a scalene triangle.";
    }
    return 0;
}
