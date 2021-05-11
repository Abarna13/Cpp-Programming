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
