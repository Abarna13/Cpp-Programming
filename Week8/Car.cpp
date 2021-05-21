/*
Develop a C++ program based on the below class diagram.

Input Format

Reads no_of_litres Reads fuel_Amount Reads colour

Constraints

-

Output Format

-

Sample Input 0

10
79
Blue
Sample Output 0

Fuel amount is: 79
Colour of the car is: Blue
*/

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
    void Display()
    {
        cin>>colour;
        cout<<"Colour of the car is: "<<colour;
    }
};

int main()
{
    Car swift;
    swift.FuelAmount();
    swift.Display();
    return 0;
}
