/*
Write a c++ program to grant the access for vote for the people with age above than 18 else deny it using user defined exception?

Input Format

15

Constraints

-

Output Format

Access denied for vote

Sample Input 0

15
Sample Output 0

Access denied for vote
*/

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
