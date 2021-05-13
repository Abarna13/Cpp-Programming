//Multilevel-Inheritance with function

#include<iostream>
using namespace std;
class GrandParent
{
    public:
    void Display()
    {
        cout<<"GrandParent class"<<endl;
    }
};
class Parent: public GrandParent
{
    public:
    void Display1()
    {
        Display();
        cout<<"Parent class"<<endl;
    }
};
class Child : public Parent
{
    public:
    Child()
    {
        cout<<"This is Base class"<<endl;
    }
};
int main()
{
    Child obj;
    obj.Display1();
    return 0;
}

