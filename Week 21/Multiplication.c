#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int num;     
    int i;
    scanf("%d",&num);
    i=1;
    while(i<=10)
    {
        printf("%d\n",(num*i));
        i++; 
    }
    return 0;
}