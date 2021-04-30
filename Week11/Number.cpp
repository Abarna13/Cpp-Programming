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