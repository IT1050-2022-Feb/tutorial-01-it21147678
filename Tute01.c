
}/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */
#include <stdio.h>

int main() 
{
  int mark1 , mark2 , x;

  printf("Enter your first marks:");
  scanf("%d",&mark1);

  printf("Enter your second marks:");
  scanf("%d",&mark2);

  x = (mark1 + mark2)/2;

  printf("The avarage is :%d",x);
  return 0;