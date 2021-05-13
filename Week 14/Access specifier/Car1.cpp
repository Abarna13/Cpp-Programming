#include<iostream>
using namespace std;
class Car
{  
private:
    int price=500000; 
     string colour="White"; 
public:
    void display() 
    {     
    cout<<"The colour of the car is : "<<colour<<endl<<"The cost of the car is : "<<price;  
    }
};
int main()
{    
    Car swift;   
    swift.display();
    return 0;
}
