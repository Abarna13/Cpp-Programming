#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
        int width, lngth, area, peri;
        cin>>lngth;
        cin>>width;
        area=(lngth*width);
        peri=2*(lngth+width);
        cout<<"Area : "<< area << endl;
        cout<<"Perimeter : "<< peri << endl;        
        cout << endl;
        return 0;
}
