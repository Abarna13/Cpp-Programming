#include<iostream>
using namespace std;
template <typename T>
T Greater(T x, T y)
{
    return (x>y)? x : y;
}
int main()
{
    cout<<Greater(6,9)<<endl;
    cout<<Greater('K','B')<<endl;
    return 0;
}
