#include<iostream>
using namespace std;
class vehicle
{
    private:
    string colour, model;
    public:
    vehicle(string colour1, string model1)
    {
        colour = colour1;
        model = model1;
    }
    vehicle (const vehicle &car)
    {
        colour = car.colour;
        model = car.model;
    }
    void display()
    {
        cout<<colour<<" "<<model<<endl;
    }
};


int main()
{
    vehicle obj1("Red", "BMW");     
    vehicle obj2 = obj1;      
    cout<<"Normal constructor : ";
    obj1.display();
    cout<<"Copy constructor : ";
    obj2.display();
    return 0;
}


    
   
