#include<iostream>
using namespace std;
class ExceptionSample
{
    public:
    int age;
    void Display()
    {
        cin>>age;
        try
        {
        if (age>=18)
        {
        cout<<"You are eligible for voting";
        }
        else
        {
            throw(age);
        }
        }
        catch(const char*)
        {
            cout<<"You are Not eligible for voting";
        }
        catch(...)
        {
        cout<<"Default Exception";
        }
   }
};
int main()
{
    ExceptionSample obj;
    obj.Display();
    return 0;
}


        
