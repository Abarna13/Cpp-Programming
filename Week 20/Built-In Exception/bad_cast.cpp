#include<iostream>
#include<typeinfo>
using namespace std;
class Faculty
{
  virtual void Display()
  {}
};
class SeniorFaculty: public Faculty
{
};
int main()
{    
try
    {
    Faculty obj;
    SeniorFaculty& obj1= dynamic_cast <SeniorFaculty&> (obj);
    }
    catch(bad_cast e)
    {
        cout<<"Bad casting: "<<e.what();
    }
    return 0;
}
