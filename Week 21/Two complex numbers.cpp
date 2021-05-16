//C++ Program to subtract two complex numbers using operator overloading

#include <iostream>
using namespace std;
class Complex
{
    private:
      float real;
      float imag;
    public:
       Complex(): real(0), imag(0){ }
       void input()
       {
           cout << "";
           cin >> real;
           cin >> imag;
       }
       Complex operator - (Complex c2)
       {
           Complex temp;
           temp.real = real - c2.real;
           temp.imag = imag - c2.imag;

           return temp;
       }

       void output()
       {
           if(imag < 0)
               cout << ""<< real << imag << "i";
           else
               cout << "" << real << " + " << imag << "i";
       }
};

int main()
{
    Complex c1, c2, result;
    c1.input();
    c2.input();
    result = c1 - c2;
    result.output();
    return 0;
}

