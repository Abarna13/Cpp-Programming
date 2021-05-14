#include<iostream>
using namespace std;
class Complex
{
    private:
    int real, imag;
    public:
    Complex(int num1=0,int num2=0)
    {
        real=num1;
        imag=num2;
    }
    void Display()
    {
        cout<<real<<" - "<<imag<<"i"<<endl;
    }
    Complex operator - (Complex c)                  
    {
        Complex temp;
        temp.real=real-c.real;
        temp.imag=imag-c.imag;
        return temp;
    }
};
int main()
{
    Complex c1(8,9);
    Complex c2(5,4);
    Complex c3= c1-c2;
    c3.Display();
    return 0;
}



