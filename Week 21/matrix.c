//C Program to find sum of all elements of each row of matrix

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAXROW        10
#define MAXCOL        10
int main()
{
    int matrix[MAXROW][MAXCOL];
    int i,j,r,c;
    int sum,product;
    scanf("%d",&r);
    scanf("%d",&c);
    for(i=0;i< r;i++)
    {
        for(j=0;j< c;j++)
        {
           scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i< r;i++)
    {
        sum=0;        
        for(j=0;j< c;j++)
        {
            printf("%d\t",matrix[i][j]);    
            sum        +=    matrix[i][j];
        }
        printf("\tSUM : %d",sum);
        printf("\n");           
    }

}