#include <stdio.h>
#define MAX_SIZE 100  
int main()
{
    int arr[MAX_SIZE];
    int i, j, size, count = 0;
    scanf("%d", &size);
    for(i=0; i<size; i++)
    {

        scanf("%d", &arr[i]);

    }
    for(i=0; i<size; i++)

    {

        for(j=i+1; j<size; j++)

        {
            if(arr[i] == arr[j])

            {

                count++;

                break;

            }

        }

    }

    printf("The total number of duplicate elements found in the array is: %d", count);

    return 0;

}