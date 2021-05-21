#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Complex
{
    public:
    float real;
    float img;

    Complex()
    {
        this->real = 0.0;
        this->img = 0.0;
    }

    Complex(float real, float img)
    {
        this->real = real;
        this->img = img;
    }
    
    Complex operator+(const Complex &obj)
    {
        Complex temp;
        temp.img = this->img + obj.img;
        temp.real = this->real + obj.real;
        return temp;
    }
    
    void display()
    {
        cout << this->real << " + " << this->img << "i" << endl;
    }
};
 
int main()
{
    Complex a, b, c;
    cin >> a.real;
    cin >> a.img;
    cin >> b.real;
    cin >> b.img;
    c = a+b;
    c.display();
    return 0;
}


