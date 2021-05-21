/*
To find prime factors of a number n, we check its divisibility by prime numbers 2,3,5,7,… till we get a divisor d. Now d becomes a prime factor and the problem reduces to finding the prime factor of n/d. The base case occurs when the problem reduces to finding prime factors of 1.

Input Format

50

Constraints

-

Output Format

Prime factors of 50 :
2 5 5

Sample Input 0

50
Sample Output 0

Prime factors of 50 :
2    5    5    
Sample Input 1

70
Sample Output 1

Prime factors of 70 :
2    5    7    
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
