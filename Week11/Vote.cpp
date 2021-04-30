#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    int age;
    cin>>age;
    try
    {
        if(age>=18)
        {
            cout<<"Access allowed for vote";
        }
        else
        {
            throw age;
        }
    }
    catch(int ex)
    {
        cout<<"Access denied for vote";
    }
}