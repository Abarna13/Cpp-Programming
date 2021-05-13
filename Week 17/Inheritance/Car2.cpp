#include <iostream>
using namespace std;
class Vehicle
{
    public:
    int no_of_litres;
    int fuel_price;
    Vehicle(int price)
    {
      fuel_price=price;
    }
    virtual void FuelAmount() =0;
};

class Car : public Vehicle
{
    public:
    string colour;
    Car(int price,string color):Vehicle(price)
    {
        colour=color;
    }
    void FuelAmount()
    {
        cout<<"How many litres: ";
        cin>>no_of_litres;
        cout<<"The cost for the car fuel is: "<<fuel_price*no_of_litres<<endl;
    }
    void Display()
    {
        cout<<"The colour of the car: "<<colour<<endl;
    }
};
int main()
{
    Car swift(79,"White");
    swift.FuelAmount();
    swift.Display();        
    return 0;
}

 
