#include <iostream>
using namespace std;
class vehicle;
class car
{
    private:
    string colour;
    public:
    car()
    {
        colour="Red";
    }
    friend string display(car,vehicle);
};
class vehicle
{
    private:
    string model;
    public:
    vehicle()
    {
        model="BMW";
    }
    friend string display(car,vehicle);
};
string display(car c1,vehicle v1)
{
    return(c1.colour  +  v1.model);
}
int main()
{
    car c1;
    vehicle v1;
    cout<<"Display: "<<display(c1,v1)<<endl;
    return 0;
}

