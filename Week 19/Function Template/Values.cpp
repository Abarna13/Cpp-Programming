#include<iostream>
using namespace std;
template <typename T>
void Print(T value)
{
    cout<<value<<endl;
}
int main()
{
    Print(10);
    Print('H');
    Print(4.5f);
    return 0;
}
void Print(int value)
{
    cout<<value<<endl;
}

void Print(char value)
{
    cout<<value<<endl;
}

void Print(float value)
{
    cout<<value<<endl;
}


