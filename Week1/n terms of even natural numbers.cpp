#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int sum=0;
    cout<<"The even numbers are :";
    for(int i=1;i<=n*2;i++){
        if(i%2==0){
        cout<<i<<" ";
            sum=sum+i;
        }
    }
    cout<<endl;
    cout<<"The Sum of even Natural Number upto "<<n<<" terms :"<<" "<<sum;
        return 0;
}
 

