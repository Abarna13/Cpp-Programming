/*Create a program in C to count a total number of duplicate elements in an array.

Input Format

4 3 4 4 3

Constraints

-

Output Format

The total number of duplicate elements found in the array is: 2

Sample Input 0

4
3
4
4
3
Sample Output 0

The total number of duplicate elements found in the array is: 2
Sample Input 1

3
1
2
1
Sample Output 1

The total number of duplicate elements found in the array is: 1 
*/



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
