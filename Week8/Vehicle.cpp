/*
Develop a C++ program based on the below class diagram.

image

Input Format

Reads no_of_litres Reads fuel_prices Reads cost Reads colour Reads no_of_wheels

Constraints

-

Output Format

-

Sample Input 0

10
79
Blue
4
Sample Output 0

Fuel amount is: 79                                                                 
Colour of the car is: Blue                                                       
No of wheels for bus is: 4
Sample Input 1

15
79
White
4
Sample Output 1

Fuel amount is: 79                                                                   
Colour of the car is: White                                                        
No of wheels for bus is: 4 
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

