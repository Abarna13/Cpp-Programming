#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct address   
{  
    char city[20];  
    int pin;  
    char phone[14];  
};  
struct employee  
{  
    char name[20];  
    struct address add;  
};  
int main()  
{  
    struct employee emp;    
    scanf("%s %s %d %s",emp.name,emp.add.city, &emp.add.pin, emp.add.phone);  
    printf("Printing the employee information....\n");  
    printf("name: %s\nCity: %s\nPincode: %d\nPhone: %s",emp.name,emp.add.city,emp.add.pin,emp.add.phone);  
}