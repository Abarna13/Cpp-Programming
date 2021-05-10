#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct FirstStruct
{
    int Num1;
    int Num2;
}
FirstStruct_IP;
struct FirstStruct TakeUserInput(void);
void DisplayOutput(struct FirstStruct Input);
struct FirstStruct inputStruct;
int main()
{
    DisplayOutput(TakeUserInput());
    return 0;
}


struct FirstStruct TakeUserInput(void)
{
    scanf("%d",&inputStruct.Num1);
    scanf("%d",&inputStruct.Num2);
    return inputStruct;
}

void DisplayOutput(struct FirstStruct Input)
{
    printf("%d\n",((Input.Num1)+(Input.Num2)));
}