#include<iostream>
using namespace std;
class Car
{ 
protected:
    int price=500000; 
    char colour[10]="White"; 
};
class RacingCar : public Car
{
    public:
    void display() 
    {     
        cout<<"The colour of the car is : "<<colour<<endl<<"The cost of the car is : "<<price;  
    }
};
int main()
{    
    RacingCar ferrari;   
    ferrari.display();
    return 0;
}
