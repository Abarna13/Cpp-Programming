#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{ 
    int n,i,fact=1; 
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { 
        fact=fact*i; 
    } 
    printf("Factorial of %d is %d",n,fact);
return 0;
}