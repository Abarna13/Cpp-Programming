/*
Create a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.

Input Format

7 9

Constraints

-

Output Format

The coordinate point (7,9) lies in the First quadrant.

Sample Input 0

7 9
Sample Output 0

The coordinate point (7,9) lies in the First quadrant.
Sample Input 1

-9 3
Sample Output 1

The coordinate point (-9,3) lies in the Second quandrant.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    int x,y;
    cin>>x>>y;
    if(x>=0 && y>=0){
        cout<<"The coordinate point ("<<x<<","<<y<<") lies in the First quadrant."<<endl;
    }
    else if(x<=0 && y>=0){
        cout<<"The coordinate point ("<<x<<","<<y<<") lies in the Second quandrant."<<endl;
    }
    if(x>=0 && y<=0){
        cout<<"The coordinate point ("<<x<<","<<y<<") lies in the Third quadrant."<<endl;
    }
    if(x<=0 && y<=0){
        cout<<"The coordinate point ("<<x<<","<<y<<") lies in the Fourth quadrant."<<endl;
    }
    
    return 0;
}
