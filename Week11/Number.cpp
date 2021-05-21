/*
Find the sum of a number using user defined exception handling given Sum=10?

Input Format

80

Constraints

-

Output Format

Sum is:90

Sample Input 0

80
Sample Output 0

Sum is:90
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    try
    {
        int a,sum=10;
        cin>>a;
        if(a==0)
        throw a;
        else
        {
            sum=sum+a;
            cout<<"Sum is:"<<sum;
        }
    }
    catch(int ex)
    {
        cout<<"Enter a valid number:";
    }
}
