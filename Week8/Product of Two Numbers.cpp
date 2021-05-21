/*
Find the product of two numbers using single inheritance?

Input Format

3 4

Constraints

-

Output Format

Product = 12

Sample Input 0

5 2
Sample Output 0

Product = 10
Sample Input 1

3 4
Sample Output 1

Product = 12
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    double firstNumber, secondNumber, productOfTwoNumbers;
    cin >> firstNumber >> secondNumber;
    productOfTwoNumbers = firstNumber * secondNumber;  
    cout << "Product = " << productOfTwoNumbers;
    return 0;
}

