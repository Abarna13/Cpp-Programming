#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    int numerator,denominator,result;
    cin>>numerator>>denominator;
    try
    {
        if(denominator==0)
        {
            throw denominator;
        }
        else
        {
            result = numerator/denominator;
        }
    }
    catch(int ex)
    {
        cout<<"Division by Zero.";
    }
    return 0;
}