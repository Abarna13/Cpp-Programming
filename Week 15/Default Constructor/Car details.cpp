#include<iostream>
#include<string>
using namespace std;
class Car
{
public:
   string colour;
   string model;
   int year;
   Car()
{
    colour="Red";
    model="BMW";
    year=1990;
    cout<<"Car Details"<<endl;
}
void Vehicle()
{
    cout<<colour<<""<<model<<""<<year;
    
}
};
int main()
{
   Car C1;
   C1.Vehicle();
    return 0;
}



