#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int sum(int a,int b)
{
    return a+b;
}
float avg(int a,int b)
{
    float avg;
    avg=float(sum(a,b))/2.0;
    return avg;
}

int main()
{
    int x,y,s;
    float a;
    cin>>x>>y;
    s=sum(x,y);
    a=avg(x,y);
    printf("Sum: %d,",s);
    printf(" Average: %f",a);
    return 0;
}