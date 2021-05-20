/*Create a C Program to Add Two Complex Numbers by Passing Structure to a Function

Input Format

2.1
-2.3
5.6
23.2

Constraints

-

Output Format

Sum = 7.7 + 20.9i

Sample Input 0

2.1                                                                                                                       
-2.3                                                                                                                      
5.6                                                                                                                       
23.2  
Sample Output 0

Sum = 7.7 + 20.9i
Sample Input 1

3.2                                                                                                                       
-6.3                                                                                                                      
5.5                                                                                                                       
12.3 
Sample Output 1

Sum = 8.7 + 6.0i
*/


#include <stdio.h>
typedef struct complex {
    float real;
    float imag;
} 
complex;
complex add(complex n1, complex n2);
int main() {
    complex n1, n2, result;
    scanf("%f %f", &n1.real, &n1.imag);
    scanf("%f %f", &n2.real, &n2.imag);
    result = add(n1, n2);
    printf("Sum = %.1f + %.1fi", result.real, result.imag);
    return 0;
}
complex add(complex n1, complex n2) {
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return (temp);
}
