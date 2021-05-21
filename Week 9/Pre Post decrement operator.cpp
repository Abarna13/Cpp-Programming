/*
Write a c++ program to implement the pre and post decrement operator using operator overloading in polymorphism concept

Input Format

-

Constraints

-

Output Format

i = 3 i = 3 i = 2 i = 2 i = 1 i = 2

Sample Input 0

-
Sample Output 0

i = 3
i = 3
i = 2
i = 2
i = 1
i = 2
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Check
{
    private:
    int i;
    public:
    Check(): i(3) {  }
    Check operator -- ()
    {
        Check temp;
        temp.i = --i;
        return temp;
    }


    Check operator -- (int)
    {
        Check temp;
        temp.i = i--;
        return temp;
    }

    void Display()
    {
        cout << "i = "<< i <<endl;
    }
};

int main()
{
    Check obj, obj1;    
    obj.Display(); 
    obj1.Display();
    obj1 = --obj;
    obj.Display();
    obj1.Display();
    obj1 = obj--;
    obj.Display();
    obj1.Display();
    return 0;
}
