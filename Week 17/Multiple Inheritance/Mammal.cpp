#include<iostream>
using namespace std;
class Mammal
{
    public:
    void Display()
    {
        cout<<"Mammal class"<<endl;
    }
};
class WingedAnimal
{
    public:
    void Display1()
    {
        cout<<"Winged Animal class"<<endl;
    }
};

class Bat : public Mammal, public WingedAnimal
{
    public:
    Bat()
    {
        cout<<"This is Base class"<<endl;
    }
};
int main()
{
    Bat obj;
    obj.Display();
    return 0;
}
 

