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
        cout << "Product is: " << mul() << endl;
        cout << "Division is: " << div() << endl;
    }
    T mul()
    {
        return num1 * num2;
    }
    T div()
    {
        return num1 / num2;
    }
};
int main()
{
    Calculator<int> intCalc(10, 2);
    Calculator<float> floatCalc(4.4, 1.2);
    cout << "Integer values:" << endl;
    intCalc.displayResult();
    cout << endl << "Float values:" << endl;
    floatCalc.displayResult();
    return 0;
}