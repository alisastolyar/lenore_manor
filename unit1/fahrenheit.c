#include <stdio.h> // header file with pre-established functions
#include <cs50.h> // header file with pre-established functions

int main(void) // starts your program
{
    float celsius, fahrenheit; // creating variables


    celsius = get_float("enter temperture in degrees celsius: \n") ; // get float = creating variable for celsius and using get float to grab user data
    fahrenheit = ((celsius * 9) / 5) + 32; // creating formula with same variables
    printf("That is equal to %.2f degrees fahrenheit.", fahrenheit) ; // with two decimal places + getting your answer - output
}

