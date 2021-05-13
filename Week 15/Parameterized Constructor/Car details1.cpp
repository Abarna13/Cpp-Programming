#include<iostream>              
#include<string>
using namespace std;
class Car 
{        
public:          
    string colour;  
    string model;  
    int year;
    Car(string x, string y, int z);
    void Display()
    {
        cout<<colour<<"  "<<model<<"  "<<year<<endl;
    }
};
Car::Car(string x, string y, int z)
{
  colour = x;
  model = y;
  year = z;
}
int main()
{
    Car c1("red", "BMW", 1999);
    Car c2("yellow", "Mustang", 1960);
    c1.Display();
    c2.Display();
    return 0;
}




