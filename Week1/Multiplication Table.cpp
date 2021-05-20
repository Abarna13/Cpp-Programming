/*Create a program in C to display the multiplication table of a given integer.

Input Format

4

Constraints

-

Output Format

4 X 1 = 4 4 X 2 = 8 4 X 3 = 12 4 X 4 = 16 4 X 5 = 20 4 X 6 = 24 4 X 7 = 28 4 X 8 = 32 4 X 9 = 36 4 X 10 = 40

Sample Input 0

4
Sample Output 0

4 X 1 = 4 
4 X 2 = 8 
4 X 3 = 12 
4 X 4 = 16 
4 X 5 = 20 
4 X 6 = 24 
4 X 7 = 28 
4 X 8 = 32 
4 X 9 = 36 
4 X 10 = 40 
Sample Input 1

12
Sample Output 1

12 X 1 = 12 
12 X 2 = 24 
12 X 3 = 36 
12 X 4 = 48 
12 X 5 = 60 
12 X 6 = 72 
12 X 7 = 84 
12 X 8 = 96 
12 X 9 = 108 
12 X 10 = 120 
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
    for(int i=1;i<=10;i++){
        cout<<n<<" X "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}
