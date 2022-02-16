/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h> //program addition

//declaring functions
int minimun(int x, int y); //declaring function minimum()
int maximum(int x, int y); //declaring function maximum()
int multiply(int x, int y); ////declaring function multiply()

//function main starts program execution
int main() {
   int no1, no2; //varaibles to store the entered integers

   printf("Enter a value for no 1 : "); //prompt
   scanf("%d", &no1); //reading the first value

   printf("Enter a value for no 2 : "); //prompt
   scanf("%d", &no2); //reading the second value

   printf("%d ", minimum(no1, no2)); //displaying the minimum
   printf("%d ", maximum(no1, no2)); //displaying the maximum
   printf("%d ", multiply(no1, no2)); //displaying the product
   
   return 0;
} //end of main program

//function implementation

//implementing function minimum()
int minimum(int x, int y){

  //calculation of the minimum value
  if(x < y)
    return x; //returning the value
   //end if

  else
    return y; //returning the value
  //end else

} //end of function

//implementing function maximum()
int maximum(int x, int y){

  //calculation of the maximum value
  if(x < y)
    return y; //returning the value
   //end if

  else
    return x; //returning the value
  //end else

} //end of function

//implementing function multiply()
int multiply(int x, int y){
  return x * y; //returning the product of the numbers
}//end of function
