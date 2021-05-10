#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int num1, num2,r,i;
    scanf("%d",&num1);
    scanf("%d",&num2);
    for(i=num1; i<=num2; i++)
    {
        r=i%2;
        if(r==0)
        printf("%d ",i);
    }
    return 0;
}