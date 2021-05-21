/*
Write a c++ program to find the cost of the car fuel using abstract class and functions,given the fuel price -79 as input?

Input Format

58

Constraints

-

Output Format

The cost for the car fuel is: 4582

Sample Input 0

58
Sample Output 0

The cost for the car fuel is: 4582
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
    int no_of_litres, fuel_price=79;
    virtual void FuelAmount() =0;
};

class Car :
public Vehicle
{
    public:
    char colour[10]="White";
    void FuelAmount()
    {
        //cout<<"Litres: ";
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
    Vehicle *swift = new Car;
    swift->FuelAmount();
    return 0;
}
