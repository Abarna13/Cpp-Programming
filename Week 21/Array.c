#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i;
    int count;
    int *arr;
    int sum = 0;
    scanf("%d",&count);
    arr = (int *)malloc(count * sizeof(int));
    for(i = 0;i<count;i++){
        scanf("%d",arr+i);
        sum += *(arr+i);
    }
    printf("Sum = %d \n",sum);
    free(arr);
    return 0;
}