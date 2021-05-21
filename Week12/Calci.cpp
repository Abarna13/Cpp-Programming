/*
Write a c++ program to add and subtract two numbers using class template

Input Format

2 1 2.4 1.2

Constraints

-

Output Format

Int results: Numbers are: 2 and 1. Addition is: 3 Subtraction is: 1

Float results: Numbers are: 2.4 and 1.2. Addition is: 3.6 Subtraction is: 1.2

Sample Input 0

-
Sample Output 0

Int results:
Numbers are: 2 and 1.
Addition is: 3
Subtraction is: 1

Float results:
Numbers are: 2.4 and 1.2.
Addition is: 3.6
Subtraction is: 1.2
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
template <class T>
class Calculator
{
    private:T num1, num2;
    public:Calculator(T n1, T n2)
    {
        num1 = n1;
        num2 = n2;
    }
    void displayResult()
    {
        cout << "Numbers are: " << num1 << " and " << num2 << "." << endl;
        cout << "Addition is: " << add() << endl;
        cout << "Subtraction is: " << subtract() << endl;
    }
    T add()
    {
        return num1 + num2;
    }
    T subtract()
    {
        return num1 - num2;
    }
};
int main()
{
    Calculator<int> intCalc(2, 1);
    Calculator<float> floatCalc(2.4, 1.2);
    cout << "Int results:" << endl;
    intCalc.displayResult();
    cout << endl << "Float results:" << endl;
    floatCalc.displayResult();
    return 0;
}
