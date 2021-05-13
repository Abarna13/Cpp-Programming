#include <iostream>
using namespace std;
class Vehicle
{
  public:
  int no_of_litres, fuel_price=79;
  void FuelAmount()
    {
      cout<<"How many litres: ";
      cin>>no_of_litres;
      cout<<"The cost for the fuel is: "<<fuel_price*no_of_litres<<endl;
    }
};
class Car : public Vehicle
{
  public:
  char colour[10]="White";
  void Display()
  {
      cout<<"The colour of the car: "<<colour<<endl;
  }
};
int main()
{
    Car swift;
    swift.FuelAmount();
    swift.Display();
    return 0;
}

