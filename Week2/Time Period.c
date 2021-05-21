/*Create a C Program to Calculate Difference Between Two Time Periods.(by using structure and function).

Input Format

13
34
55
8
12
15

Constraints

-

Output Format

Time Difference: 13:34:55 - 8:12:15 = 5:22:40

Sample Input 0

13                                                                                                                        
34                                                                                                                        
55                                                                                                                        
8                                                                                                                         
12                                                                                                                        
15 
Sample Output 0

Time Difference: 13:34:55 - 8:12:15 = 5:22:40 
Sample Input 1

11                                                                                                                       
20                                                                                                                       
33                                                                                                                       
3                                                                                                                        
15                                                                                                                       
25  
Sample Output 1

Time Difference: 11:20:33 - 3:15:25 = 8:5:8 
*/


#include <stdio.h>

struct TIME {

   int seconds;

   int minutes;

   int hours;

};

void differenceBetweenTimePeriod(struct TIME t1, struct TIME t2, struct TIME *diff);

int main() {

   struct TIME startTime, stopTime, diff;
   
   scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

   scanf("%d %d %d", &stopTime.hours, &stopTime.minutes, &stopTime.seconds);
   
   differenceBetweenTimePeriod(startTime, stopTime, &diff);

   printf("Time Difference: %d:%d:%d - ", startTime.hours, startTime.minutes, startTime.seconds);

   printf("%d:%d:%d ", stopTime.hours, stopTime.minutes, stopTime.seconds);

   printf("= %d:%d:%d\n", diff.hours, diff.minutes, diff.seconds);

   return 0;

}

void differenceBetweenTimePeriod(struct TIME start, struct TIME stop, struct TIME *diff) {

   while (stop.seconds > start.seconds) {
       
       --start.minutes;
       
       start.seconds += 60;

   }

   diff->seconds = start.seconds - stop.seconds;

   while (stop.minutes > start.minutes) {
       
       --start.hours;
       
       start.minutes += 60;

   }

   diff->minutes = start.minutes - stop.minutes;

   diff->hours = start.hours - stop.hours;

}
