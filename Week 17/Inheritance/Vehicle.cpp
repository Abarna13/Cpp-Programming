#include <iostream>
using namespace std;
class Vehicle
{
    public:
    int no_of_litres, fuel_price=79;
    virtual void FuelAmount() =0;
};
class Car : public Vehicle
{
    public:
    char colour[10]="White";
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
class Bus : public Vehicle
{
    public:
    int no_of_wheel=4;
    void Display()
    {
        cout<<"No of no_of_wheel: "<<no_of_wheel<<endl;
    }
    void FuelAmount()
    {
        cout<<"How many litres: ";
        cin>>no_of_litres;
        cout<<"The cost for the bus fuel is: "<<fuel_price*no_of_litres<<endl;
    }
};
int main()
{
    Car swift;
    swift.FuelAmount();    
    swift.Display();
    Bus gov;
    gov.Display();
    gov.FuelAmount();
    return 0;
}

