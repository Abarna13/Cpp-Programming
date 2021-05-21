/*
Write a c++ program to shows handling of division by zero exception.

Input Format

30 0 0

Constraints

-

Output Format

Division by Zero.

Sample Input 0

30 0 0 
Sample Output 0

Division by Zero.
*/


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
