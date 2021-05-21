/*
Write a C++ program to declare whether student have passed or failed in the examination. An Exception is handled if the student has failed the examination.

Input Format

-

Constraints

--

Output Format

-

Sample Input 0

52                                                                                                                                           
12                                                                                                                                           
32                                                                                                                                           
56                                                                                                                                           
11                                                                                                                                           
Sample Output 0

You have failed the examination 
Sample Input 1

56                                                                                                                                           
78                                                                                                                                           
85                                                                                                                                           
63                                                                                                                                           
77                                                                                                                                           
Sample Output 1

You have passed with average of 71%
*/
 


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
