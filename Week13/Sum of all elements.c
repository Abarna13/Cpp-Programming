#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int *ptr;   
    int limit;    
    int i;        
    int sum;
    scanf("%d",&limit);
    ptr=(int*)malloc(limit*sizeof(int));
    for(i=0;i<limit;i++)
    {
        scanf("%d",(ptr+i));
    }
    sum=0;    
    for(i=0;i<limit;i++)
    {
        sum+=*(ptr+i);
    }
    printf("%d",sum);
    free(ptr);    
    return 0;
}