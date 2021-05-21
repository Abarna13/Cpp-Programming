#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class PoweredDevice
{
    public:
    PoweredDevice()
    {
        cout<<"PoweredDevice class"<<endl;
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


class Printer: public Scanner
{
    public:
    Printer()
    {
        cout<<"Printer class"<<endl;
    }
};


class Copier : public Printer
{
    public:
    Copier()
    {
        cout<<"Copier class"<<endl;
    }
};

int main()
{
    Copier obj;
    return 0;
}
