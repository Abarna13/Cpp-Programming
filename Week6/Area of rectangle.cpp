#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class CRectangle {
    public:
    int x,y;
    int area(){return x*y;}
};

int main ()
{
    CRectangle rect;
    cin>>rect.x;
    cin>>rect.y;
    cout <<"Area:"<< rect.area();
    return 0;
}
 