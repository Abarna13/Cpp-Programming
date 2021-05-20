/*
Create a program in C to display the n terms of even natural number and their sum.

Input Format

5

Constraints

-

Output Format

The even numbers are :2 4 6 8 10 The Sum of even Natural Number upto 5 terms : 30

Sample Input 0

5
Sample Output 0

The even numbers are :2 4 6 8 10
The Sum of even Natural Number upto 5 terms : 30
Sample Input 1

7
Sample Output 1

The even numbers are :2 4 6 8 10 12 14 
The Sum of even Natural Number upto 7 terms : 56 
*/

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
 

