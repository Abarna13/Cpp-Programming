#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int *arr;
    int limit,i;
    int sum=0;
    scanf("%d",&limit);
    arr=(int*)malloc(limit*sizeof(int));
    if(arr==NULL)
    {
        printf("Insufficient Memory, Exiting...");
    }
    for(i=0; i<limit; i++)
    {
        scanf("%d",(arr+i));
        sum=sum + *(arr+i);
    }
    printf("Array elements are:");
    for(i=0; i<limit; i++)
    printf("%3d ",*(arr+i));
    printf("\nSum of all elements: %d",sum);
    return 0;
}
