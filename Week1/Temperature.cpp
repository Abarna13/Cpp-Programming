/*Temp < 0 then Freezing weather Temp 0-10 then Very Cold weather Temp 10-20 then Cold weather Temp 20-30 then Normal in Temp Temp 30-40 then Its Hot Temp >=40 then Its Very Hot

Input Format

42

Constraints

-

Output Format

Its very hot.

Sample Input 0

42
Sample Output 0

Its very hot.
Sample Input 1

-32
Sample Output 1

Freezing weather.
*/


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
