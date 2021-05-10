#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sum(int a, int b)
{
   return a+b;
}

int main()
{
   int num1, num2, num3;
   scanf("%d", &num1);
   scanf("%d", &num2);
   num3 = sum(num1, num2);
   printf("Addition of two numbers: %d", num3);
   return 0;
}