/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int mark1, mark2;
   float avg;
   printf("Enter mark1 :");
   scanf("%d", &mak1);
   
   printf("Enter mark2 :");
   scanf("%d", &mak2);
   
   avg = (mark1 + mark2)/2.0;
   
   printf("Avarage is :", avg);
  
  return 0;
}

