/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h> //program addition

//fuction main starts program execution
int main() {
  float distance; //variable to store the distance travelled
  float amount; //variable to store the calculated amount to be paid

  printf("Enter the distance travelled (in km) : "); //prompt
  scanf("%f", &distance); //reading the distance travelled

  //the following while loop executes if the entered distance is a negative value
  while(distance < 0){ //condition
    printf("Invalid value ! Please enter again : "); //prompt
    scanf("%f", &distance); //reading the distance travelled
  } //end while

  //calculation of the amount
  if(distance <= 30) //when the distance is less than 30 km
    amount = distance * 50 ; //calculation
  //end if 

  else //when the distance is greater than 30 km
    amount = 30 * 50 + (distance - 30) * 40 ; //calculation
    
  printf("\nThe amount to be paid is Rs. %.2f", amount); //displaying the amount to be paid

  return 0;
} //end of main program
