#include <stdio.h>
#define MAX_SIZE 100
int main()
{

    int arr[MAX_SIZE], freq[MAX_SIZE];
    int size, i, j, count;
    scanf("%d", &size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
        }
        for(i=0; i<size; i++)
        {
            count = 1;
            for(j=i+1; j<size; j++)
            {
                if(arr[i] == arr[j])
                {
                    count++;
                    freq[j] = 0;
                }
            }
            if(freq[i] != 0)
            {
                freq[i] = count;
            }
        }
        printf("The unique elements found in the array are: \n");
        for(i=0; i<size; i++)
        {
            if(freq[i] == 1)
            {
                printf("%d ", arr[i]);
            }
        }
        return 0;
}