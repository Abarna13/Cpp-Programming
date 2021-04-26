#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class data
{
    public:
    int nu1,nu2;
    data(int numm1,int numm2)
    {
        nu1=numm1;nu2=numm2;cout <<"numbers initialized \n";
    }
    int sum_num(){return nu1+nu2;}
};

int main ()
{
    int num1;
    int num2;
    //out<<"Enter first number : ";
    cin>>num1;
    //out<<"Enter second number : ";
    cin>>num2;
    data set_nu(num1,num2);
    cout << "The addition result on:"<< set_nu.sum_num()<<"\n";
    return 0;
}