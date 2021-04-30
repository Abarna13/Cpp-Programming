#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Lucky
{
    public:
    void Display()
    {
        try
        {
            int number,lucky_number=100;
            cin>>number;
            if(number==lucky_number)
            {
                cout<<"You have found the lucky number!!!!"<<endl;
            }
            else if (number<lucky_number)
            {
                throw("Sorry!!! Number is less than lucky number");
            }
            else
            {
                throw("Sorry!!! Number is greater than lucky number");
            }
        }
        catch(const char* msg)
        {
            cout<<msg<<endl;
        }
    }
};
int main()
{
   Lucky obj;
   obj.Display();
   return 0;
}