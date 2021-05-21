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


