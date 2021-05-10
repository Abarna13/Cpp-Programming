#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
   int n, sum = 0, r;
   for (scanf("%d", &n); n != 0; n = n/10)
   {
       r = n % 10;
      sum = sum + r;
   }
   printf("sum of digits: %d\n", sum);
   return 0;
}