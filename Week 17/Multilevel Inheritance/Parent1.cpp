#include<iostream>
using namespace std;
class GrandParent
{
    public:
    string state;
    GrandParent(string state)
    {
        cout<<"GrandParent class"<<endl;
    }
};
class Parent: public GrandParent
{
    public:
    string city;
    Parent(string state,string city): GrandParent(state)
    {
        cout<<"Parent class"<<endl;
    }
};

class Child : public Parent
{
    public:
    int age;
    Child(string state,string city, int age): Parent(state,city)
    {
        cout<<"This is Base class and the age is : "<<age<<endl;
        cout<<"The state is "<<state<<" and the country is "<<city<<endl;
    }
};
int main()
{
    Child obj("TN","Chennai",15);
    return 0;
}

