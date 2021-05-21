/*
Write a C++ program for sorting the values using function template

Input Format

-

Constraints

-

Output Format

-

Sample Input 0

-
Sample Output 0

Sorted value                                                                                                                  
11 34 56 87 92                                                                                                                
Sorted value                                                                                                                  
a f i r s 
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iostream>
#include <string>
#include <bits/stdc++.h> 
using namespace std;
template <class T> 
void sortArray(T a[], int n) 
{
    bool b = true; 
    while (b)
    {
        b = false;
        for (int i=0; i<n-1; i++)
        {
            if (a[i] > a[i + 1])
            {
                T temp = a[i]; 
                a[i] = a[i + 1]; 
                a[i + 1] = temp; 
                b = true; 
            } 
        } 
    } 
} 
template <class T> 
void printArray(T a[], int n) 
{
    for (int i = 0; i < n; ++i)
    cout << a[i] << " ";     
    cout << endl; 
} 
int main() 
{ 
    int n = 5; 
    int intArr[n] = { 87,56, 34, 11, 92 }; 
    sortArray(intArr, n); 
    cout<<"Sorted value\n";
    printArray(intArr,n); 
    string strArr[n] = { "r", "i", "s", "f", "a" }; 
    sortArray(strArr, n); 
    cout<<"Sorted value\n";
    printArray(strArr, n); 
    return 0; 
}
