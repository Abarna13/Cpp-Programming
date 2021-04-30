#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
template <class T>
T Greater(T x, T y)
{
    return (x>y)? x : y;
}
int main()
{
    cout<<Greater(5,10)<<" is larger."<<endl;
    cout<<Greater(12.4,10.2)<<" is larger."<<endl;
    cout<<Greater('z','Z')<<" has larger ASCII value."<<endl;
    return 0;
}