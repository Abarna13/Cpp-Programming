/*Write a program that extracts and adds the two least significant digits of any number. Define three functions addTwoDigits(), lastDigit() and secondLastDigit(). The main function should call addTwoDigits(). The lastDigit() and secondLastDigit() functions should be called from function addTwoDigits().

Input Format

2134

Constraints

-

Output Format

Sum of last two digits is = 7

Sample Input 0

2134
Sample Output 0

Sum of last two digits is = 7   
Sample Input 1

5467
Sample Output 1

Sum of last two digits is = 13
*/


#include<stdio.h>
int addtwodigit(int n);
int lastdigit(int a);
int secondlastdigit(int b);
int main()
{
    int number, sum;
    scanf("%d",&number);
    sum=addtwodigit(number);
    printf("Sum of last two digits is = %d",sum);
    return 0;
}

int addtwodigit(int n)
{
    int s=lastdigit(n) + secondlastdigit(n);
    return s;
}

int lastdigit(int a)
{
    return (a%10);
}

int secondlastdigit(int b)

{
    return ((b/10)%10);
}
