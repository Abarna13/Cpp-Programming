# include <stdio.h>  
#include<math.h>
void primeFactors(int n) 
{
    while (n%2 == 0)
    {
        printf("%d\t", 2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            printf("%d\t", i);
            n = n/i;
        } 

    }
    if (n > 2) 

        printf ("%d\t", n);
} 

  
int main() 

{
    int n ;
    scanf("%d",&n);
    printf("Prime factors of %d : \n",n);
    primeFactors(n);
    return 0; 

}
