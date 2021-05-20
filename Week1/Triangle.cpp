/*Equilateral triangle: An equilateral triangle is a triangle in which all three sides are equal. In the familiar Euclidean geometry, equilateral triangles are also equiangular; that is, all three internal angles are also congruent to each other and are each 60°.

Isosceles triangle: An isosceles triangle is a triangle that has two sides of equal length.

Scalene triangle: A scalene triangle is a triangle that has three unequal sides, such as those illustrated above.

Input Format

50 50 60

Constraints

-

Output Format

This is an isosceles triangle.

Sample Input 0

50 50 60
Sample Output 0

This is an isosceles triangle.
Sample Input 1

90 80 70
Sample Output 1

This is a scalene triangle.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c){
        cout<<"This is an equilateral triangle.";
    }
    else if(a==b || b==c){
        cout<<"This is an isosceles triangle.";
    }
    else if(a!=b && b!=c){
        cout<<"This is a scalene triangle.";
    }
    return 0;
}
