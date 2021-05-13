#include<iostream>
using namespace std;
class Car
{  
public:
    int price=500000; 
    char colour[10]="White"; 
    void Display() 
    {     
    cout<<"The colour of the car is : "<<colour<<endl<<"The cost of the car is : "<<price;  
    }
};                                     
int main()
{    
    Car swift;   
    cout<<swift.price<<endl;
    swift.Display();                          
    return 0;
}

