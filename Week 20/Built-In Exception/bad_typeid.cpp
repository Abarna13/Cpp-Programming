#include<iostream>
#include<typeinfo>
using namespace std;
class Base{ virtual void Display() {} };
int main()
{
    try
    {
    Base *obj=0;
    cout<< typeid(*obj).name();
    }
    catch(bad_typeid& bt)
    {
        cout<<"Bad caught: "<<bt.what();
    }
    return 0;       
}
