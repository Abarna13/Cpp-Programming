/*
Write a program in C to print all unique elements in an array.

Input Format

5
1
2
2
3
4

Constraints

-

Output Format

The unique elements found in the array are:
1 3 4

Sample Input 0

5                                                                                                                         
1                                                                                                                         
2                                                                                                                         
2                                                                                                                         
3                                                                                                                         
4  
Sample Output 0

The unique elements found in the array are:                                                                               
1 3 4   
Sample Input 1

3                                                                                                                        
1                                                                                                                        
1                                                                                                                        
2
Sample Output 1

The unique elements found in the array are:                                                                              
2
*/

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
