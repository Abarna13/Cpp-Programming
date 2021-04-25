#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int temp;
    cin>>temp;
    if(temp<0){
        cout<<"Freezing weather."<<endl;
    }
    else if(temp>=0 && temp<=10){
        cout<<"Very Cold weather"<<endl;
    }
    else if(temp>10 && temp<=20){
        cout<<"Cold weather"<<endl;
    }
    else if(temp>20 && temp<=30){
        cout<<"Normal"<<endl;
    }
    else if(temp>30 && temp<=40){
        cout<<"Hot"<<endl;
    }
    else if(temp>=40){
        cout<<"Its very hot."<<endl;
    }
    return 0;
}
