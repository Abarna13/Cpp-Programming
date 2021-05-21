/*
Write a C++ program to find the lucky number. An exception will be throwed if number is less or greater than lucky number.

Input Format

-

Constraints

-

Output Format

-

Sample Input 0

54
Sample Output 0

Sorry!!! Number is less than lucky number
Sample Input 1

146
Sample Output 1

Sorry!!! Number is greater than lucky number
Sample Input 2

100
Sample Output 2

You have found the lucky number!!!!
*/

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
