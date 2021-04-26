#include <stdio.h>
int main()
{
    int arr[10], FreqArr[10], i, j, Count, Size;
    scanf("%d", &Size);
    for (i = 0; i < Size; i++)
    {
        scanf("%d", &arr[i]);
        FreqArr[i] = -1;
       }     
 
    for (i = 0; i < Size; i++)
    {
        Count = 1;
        for(j = i + 1; j < Size; j++)
        {
            if(arr[i] == arr[j])
            {
                Count++;
                FreqArr[j] = 0;
            }
        }
        if(FreqArr[i] != 0)
        {
            FreqArr[i] = Count;
        }
    }

     printf("The frequency of all elements of array : \n");
     for (i = 0; i < Size; i++)
      {
          if(FreqArr[i] != 0)
          {
              printf("%d occurs %d times \n", arr[i], FreqArr[i]);
        }        
      }         
     return 0;
}
