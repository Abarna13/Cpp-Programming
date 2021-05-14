#include<iostream>
using namespace std;
class PoweredDevice
{
    public:
    PoweredDevice()
    {
        cout<<"PoweredDevice class"<<endl;
    }
};
class Printer: public PoweredDevice
{
    public:
    Printer()
    {
        cout<<"Printer class"<<endl;
    }
};
class Scanner: public PoweredDevice
{
    public:
    Scanner()
    {
        cout<<"Scanner class"<<endl;
    }
};
class Copier : public Scanner, public Printer
{
    public:
    Copier()
    {
        cout<<"This is Base class"<<endl;
    }
};
int main()               
{
    Copier obj;
    return 0;
}

