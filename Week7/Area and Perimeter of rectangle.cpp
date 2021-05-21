/*
Write a c++ program to Calculate the area and perimeter of a rectangle using multiple inheritance?

Input Format

7 4

Constraints

-

Output Format

Area : 28

Perimeter : 22

Sample Input 0

7 4
Sample Output 0

Area : 28
Perimeter : 22
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
        int width, lngth, area, peri;
        cin>>lngth;
        cin>>width;
        area=(lngth*width);
        peri=2*(lngth+width);
        cout<<"Area : "<< area << endl;
        cout<<"Perimeter : "<< peri << endl;        
        cout << endl;
        return 0;
}
