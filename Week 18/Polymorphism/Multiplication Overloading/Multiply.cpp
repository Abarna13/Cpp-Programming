#include<iostream>
using namespace std;
class Multiplication
{
    int number1;
    public:
    Multiplication(int num1=0)
    {
        number1=num1;
    }
    Multiplication operator *(Multiplication m)
    {
        cout<<number1*m.number1<<endl;
    }
};
int main()
{
    Multiplication a(3);
    Multiplication b(5);
    Multiplication c=a*b;
}



