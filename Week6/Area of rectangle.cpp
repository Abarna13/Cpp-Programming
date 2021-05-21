/*
Create a class having two public data members and one member function which will return the area of the rectangle.

Input Format

60
30

Constraints

-

Output Format

Area:1800

Sample Input 0

60                                                                                                                        
30                                                                                                                        
Sample Output 0

Area:1800 
Sample Input 1

503                                                                                                                      
230                                                                                                                      
Sample Output 1

Area:115690   
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class CRectangle {
    public:
    int x,y;
    int area(){return x*y;}
};

int main ()
{
    CRectangle rect;
    cin>>rect.x;
    cin>>rect.y;
    cout <<"Area:"<< rect.area();
    return 0;
}
 
