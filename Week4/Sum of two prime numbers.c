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
#include <stdio.h>
int checkPrime(int n);
int main() {
    int n, i, flag = 0;
    scanf("%d", &n);
    for (i = 2; i <= n / 2; ++i)
    {
        if (checkPrime(i) == 1)
        {
            if (checkPrime(n - i) == 1)
            {
                printf("%d + %d = %d\n" ,i, n-i, n);
                flag = 1;
            }

        }

    }
    if (flag == 0)

        printf("%d cannot be expressed as the sum of two prime numbers.", n);

    return 0;
    
}


int checkPrime(int n)
{
    int i, isPrime = 1;
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }

    }
    return isPrime;
}
