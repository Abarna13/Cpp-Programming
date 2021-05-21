/*
Write a c++ program to get the marks from a person and display whether that particular person is passed or not passed using multilevel inheritance?

Input Format

60

Constraints

-

Output Format

You have not passed

Sample Input 0

60
Sample Output 0

You have not passed
Sample Input 1

75
Sample Output 1

You have passed
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int pass;
    cin>>pass;
    if (pass >= 75)
    {
        cout << "You have passed";
    }
    else
    {
        cout << "You have not passed";
    }

    return 0;
} 
