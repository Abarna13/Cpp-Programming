#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Vehicle
{
    public:
    int no_of_litres;
    int fuel_prices;
    void FuelAmount()
    {
        cin>>no_of_litres;
        cin>>fuel_prices;
        cout<<"Fuel amount is: "<<fuel_prices<<endl;
    }
};

class Car:
public Vehicle
{
    public:
    char colour[20];
    int wheels;
    void Display()
    {
        cin>>colour;
        cout<<"Colour of the car is: "<<colour;
        cin>>wheels;
        cout<<"\nNo of wheels for bus is: "<<wheels;
    }

};

int main()
{
    Car swift;
    swift.FuelAmount();
    swift.Display();
    return 0;
}

