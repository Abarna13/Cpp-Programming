/*
Here we will check That whether a number can be expressed as the sum of two prime numbers or not. Ex:- 12=5+7, 5 and 7 are the prime numbers so, 10 can be expressed as the sum of two prime numbers.

Input Format

54

Constraints

-

Output Format

7 + 47 = 54
11 + 43 = 54
13 + 41 = 54
17 + 37 = 54
23 + 31 = 54

Sample Input 0

54
Sample Output 0

7 + 47 = 54
11 + 43 = 54
13 + 41 = 54
17 + 37 = 54
23 + 31 = 54
Sample Input 1

55
Sample Output 1

2 + 53 = 55   
*/



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
