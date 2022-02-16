/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h> //program addition

//function main begins program execution
int main() {
  float mark1, mark2, average; //Defining variables

  printf("Enter marks of first subject : "); //prompt
  scanf("%f", &mark1); //reading marks

  printf("Enter marks of second subject : "); //prompt
  scanf("%f", &mark2); //reading marks

  average = (mark1 + mark2) / 2.0 ; //calculating the average

  printf("The average of the marks is %.3f", average); //displaying average
 
  return 0;
} //end of main program

