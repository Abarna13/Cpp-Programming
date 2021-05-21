/*
Write a C++ program to find the area of rectangle and triangle by making the area() as virtual function in the base class.(width=10 and height=5)

Input Format

-

Constraints

-

Output Format

-

Sample Input 0

-
Sample Output 0

Areas of Different Shapes                                                                                              
Area of Triangle: 25                                                                                                        
Area of Rectangle: 50 
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Shapes
{
    public:
    int width=10,height=5;
    virtual void area()
    {
        cout<<"Areas of Different Shapes"<<endl;
    }
};

class Rectangle:public Shapes
{
    public :
    void area()
    {
        cout<<"Area of Rectangle: "<<width*height<<endl;;
    }

};

class Triangle: public Shapes
{
    public:
    void area()
    {
        Shapes::area();
        cout<<"Area of Triangle: "<<int((width*height)/2)<<endl;

    }

};

int main()
{
    Shapes *shape_obj = new Triangle;
    shape_obj->area();
    Rectangle obj1;
    obj1.area();
    return 0;

}


