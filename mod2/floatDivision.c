/*
 * =====================================================================================
 *
 *       Filename:  floatDivision.c
 *
 *    Description:  Float Division
 *
 *        Version:  1.0
 *        Created:  01/18/2018 09:23:59 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Austin Jack (), austinjack@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{ 
    int age = 25;
    int grade = 3;
    double result;
    int iresult;

    result = (double)grade/(double)age;

    printf("result = %lf\n", result);
    iresult = (double)grade/(double)age;
    printf("result = %d\n", iresult);
    printf("result = %d\n", (int)result);

    return 0;
}
// Function Definitions


