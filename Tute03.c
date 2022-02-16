/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h> //program addition

//function main starts program execution
int main() {
  int n; //variable to store the value of n
  int i = 1; //counter variable
  int sum = 0; //variable to to store the sum of integers

  printf("This program calculates the sum of integers from 1 to n"); //display
  printf("\n\nEnter the value of n : "); //prompt
  scanf("%d", &n); //reading the value of n

  //the following loop executes if n is zero or a negative value
  while(n <= 0){ //condition
    printf("Value invalid ! Enter again : "); //prompt
    scanf("%d", &n); //reading the value of n
  } //end while
  
  //calculation of the sum of the integers from 1 to n
  while(i <= n){ //condition
    sum += i; //calculation of the sum
    ++i; //incrementing i by 1
  } //end while

  printf("\nThe sum of integers from 1 to %d is %d", n, sum); //displaying the sum

  return 0;
} //end of main program

