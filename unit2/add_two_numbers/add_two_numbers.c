#include <stdio.h> // header file with pre-established functions
#include <cs50.h> // header file with pre-established functions
#include <math.h> // header file with pre-established functions
int main(void) // starts your program
{

 printf("Enter first number: ");
    int num1 = get_int ();
    printf("Enter second number: ");
    int num2 = get_int();
//int add_two_numbers;
int total = add_two_numbers (num1, num2);
printf("Total = %d", total);
}