#include<iostream>
using namespace std;
template <typename T>
class Calc
{
    public:
    T number1, number2;
    Calc(T x, T y)
    {
        number1=x;
        number2=y;
    }
    T add();
    T sub();
};
template <typename T>
T Calc<T>::add()
{
    return number1+number2;
}
template <typename T>
T Calc<T>::sub()
{
    return number1-number2;
}

int main()
{
    Calc<int> obj1(46,12);
    cout<<"Addition of two integer numbers "<<obj1.add()<<endl;
    cout<<"Subtraction of two integer numbers "<<obj1.sub()<<endl;
    Calc<float> obj2(10.6,4.3);
    cout<<"Addition of two float numbers "<<obj2.add()<<endl;
    cout<<"Subtraction of two float numbers "<<obj2.sub()<<endl;
    return 0;
}



