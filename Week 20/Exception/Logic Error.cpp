#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
    try
    {
    string fname="Ajay";
    string lname="Kumar";
    fname.append(lname,6,3);
    cout<<fname;
       }
    catch(exception e)
    {
        cout<<"array error "<<e.what();
    }
    return 0;
}
