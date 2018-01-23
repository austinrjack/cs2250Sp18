/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/23/2018 08:36:56 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Austin Jack (), austinjack@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
// Capture weight in kg
// //Capture the height in meters
// //Calculate your BMI = weight/height**2
// Display BMI
//
   double weightInKG;
   double heightInM;
   double BMI;

   printf("Please enter your weight: ");
   scanf("%lf", &weightInKG);
   printf("Please enter your height: ");
   scanf("%lf", &heightInM);
   BMI = weightInKG / pow(heightInM,2);
   printf("Your BMI is: %lf", BMI);


    return 0;
}
// Function Definitions


