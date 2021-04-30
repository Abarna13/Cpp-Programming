#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int mark[5], i;
    int sum=0,avg;
    for(i=0; i<5; i++)
    {
        cin>>mark[i];
        sum=sum+mark[i];
    }
    avg=sum/5;
    try
    {
        if(avg>=40)
        {
            cout<<"You have passed with average of "<<avg<<"%";
        }
        else
        {
            throw avg;
        }
    }
    catch(int ex)
    {
        cout<<"You have failed the examination";
    }
}