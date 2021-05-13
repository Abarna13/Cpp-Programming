#include <iostream>
using namespace std;
class Vehicle
{
    private:
    int no_of_litres;
    protected:
    int cost, fuel_price=79;
    public:
    void FuelAmount()
    {
        cout<<"How many litres: ";
        cin>>no_of_litres;
        cost=fuel_price*no_of_litres;
    }
};
class Car : public Vehicle
{
    public:
    char colour[10]="White";
    void Display()
    {
        cout<<"The colour of the car: "<<colour<<endl;
        cout<<"The cost of fuel per litre: "<<fuel_price<<endl;
        cout<<"The total cost for the fuel is: "<<cost<<endl;;
    }
};
class Bus : public Vehicle
{
    public:
    int no_of_wheel=4;
    void Display()
    {
        cout<<"No of no_of_wheels for the bus: "<<no_of_wheel<<endl;
    }
};
int main()
{                                     
    Car swift;
    swift.FuelAmount();
    swift.Display();
    Bus gov;                    
    gov.Display();
    return 0;
}


