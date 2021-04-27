#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class A 
{
    public:
    int x, y;
    void getdata()
    {
         x=20;
         y=10;
     }
};

class B :
public A 
{
    public:
    void product()
    {
         cout << "The values of class A: " << x <<" "<<y;
         cout << "\nProduct: "<<x * y;
    }
};

class C :
public A 
{
    public:
    void sum()
    {
         cout << "\nThe values of class A: " << x <<" "<<y;
         cout << "\nDivision: "<<x/y;
    }
};

int main()
{
    B obj1;          
    C obj2;          
    obj1.getdata();
    obj1.product();
    obj2.getdata();
    obj2.sum();
    return 0;
}
