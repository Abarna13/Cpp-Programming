
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    int x,y;
    cin>>x>>y;
    if(x>=0 && y>=0){
        cout<<"The coordinate point ("<<x<<","<<y<<") lies in the First quadrant."<<endl;
    }
    else if(x<=0 && y>=0){
        cout<<"The coordinate point ("<<x<<","<<y<<") lies in the Second quandrant."<<endl;
    }
    if(x>=0 && y<=0){
        cout<<"The coordinate point ("<<x<<","<<y<<") lies in the Third quadrant."<<endl;
    }
    if(x<=0 && y<=0){
        cout<<"The coordinate point ("<<x<<","<<y<<") lies in the Fourth quadrant."<<endl;
    }
    
    return 0;
}
