/*
Create C program to read and print the student details using structure and Dynamic Memory Allocation.

Input Format

saveetha
123
96

Constraints

-

Output Format

Entered details are:
Name: saveetha, Roll Number: 123, Percentage: 96.00

Sample Input 0

saveetha                                                                                                                 
123                                                                                                                      
96    
Sample Output 0

Entered details are:                                                                                                     
Name: saveetha, Roll Number: 123, Percentage: 96.00
*/


#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    struct student
    {
        char name[30];
        int roll;
        float perc;
    };
    struct student *pstd;
    pstd=(struct student*)malloc(1*sizeof(struct student));
    if(pstd==NULL)
    {
        printf("Insufficient Memory, Exiting...");
        return 0;
    }
    scanf("%s",pstd->name);
    scanf("%d",&pstd->roll);
    scanf("%f",&pstd->perc);
    printf("Entered details are:");
    printf("\nName: %s, Roll Number: %d, Percentage: %.2f",pstd->name,pstd->roll,pstd->perc);
    return 0;
}
