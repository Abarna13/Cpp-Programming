/*
Write a C++ program to swap data using function templates?

Input Format

i1 = 2, i2 = 1; f1 = 2.4, f2 = 2.1; c1 = 'a', c2 = 'b'

Constraints

-

Output Format

i1 = 1 i2 = 2 f1 = 2.1 f2 = 2.4 c1 = b c2 = a

Sample Input 0

i1 = 2, i2 = 1;
f1 = 2.4, f2 = 2.1;
c1 = 'a', c2 = 'b';
Sample Output 0

i1 = 1
i2 = 2
f1 = 2.1
f2 = 2.4
c1 = b
c2 = a
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
template <typename T> void Swap(T &n1, T &n2)
{
    T temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}
int main()
{
    int i1 = 2, i2 = 1;
    float f1 = 2.4, f2 = 2.1;
    char c1 = 'a', c2 = 'b';
    Swap(i1, i2);
    Swap(f1, f2);
    Swap(c1, c2);
    cout << "i1 = " << i1 << "\ni2 = " << i2;
    cout << "\nf1 = " << f1 << "\nf2 = " << f2;
    cout << "\nc1 = " << c1 << "\nc2 = " << c2;
    return 0;
}
