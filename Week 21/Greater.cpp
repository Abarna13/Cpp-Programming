#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
template <typename T>
T Greater(T x,T y)
{
    return(x>y)?x:y;
}
int main()
{
    int i;
    double d;
    char c;
    i = Greater(5,10);
    d = Greater(12.4,10.2);
    c = Greater('z','Z');
    cout<<i<<" is larger."<<endl;
    cout<<d<<" is larger."<<endl;
    cout<<c<<" has larger ASCII value."<<endl;
    return 0;
}