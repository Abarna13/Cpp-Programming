#include<iostream>
using namespace std;
class GrandParent
{
    public:
    GrandParent()
    {
        cout<<"GrandParent class"<<endl;
    }
};
class Parent: public GrandParent
{
    public:
    Parent()
    {
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
    return 0;
}


