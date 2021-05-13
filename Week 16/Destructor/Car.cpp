#include <iostream>
using namespace std;
class Car
{
    public:
    Car();
    void display();
    ~Car();
};
                                             
Car::Car()
{
	cout<<"Constructor called."<<endl;	
}

void Car::display()
{
	cout<<"display function called."<<endl;	
}

Car::~Car()
{
	cout<<"Destructor  called."<<endl;	
}

int main()
{
    Car Vehicle;
    Vehicle.display();
    return 0;
}
