#include <stdio.h> // header file with pre-established functions
#include <cs50.h> // header file with pre-established functions
#include <math.h> // header file with pre-established functions
int main(void) // starts your program
{
    float AmountDue = get_float("Amount Due ($): "); //user input for the amount that they have to pay
    int AmountGiven = get_int("Amount Given ($): "); //user input for the amount that they give ex. something costs $15 but they give $20
    float change = 0; //declaring variable
    change = AmountGiven - AmountDue; // formula to find change
    printf("Your change is $%.2f\n", change); // prints what the change is
    float total = get_float("Change ($): "); // gets user input for what the change is (type in what is given before)
    int coins = 0; // declaring variable
    do{ //checks the expression at the end of the block of code

    total = round(total*100); // perform this function to make the float an integer

    while(total>=25) // perform the function as long as the total is greater than or equal to 25
    {
        total-=25; //subtract what is left from 25
        coins++; // add another coin to bank if it fits the statement
    }
    while(total>=10) // perform the function as long as the total is greater than or equal to 10
    {
        total-=10; // subtract what is left from 10
        coins++; // add another coin to bank if it fits the statement
    }
    while(total>=5) //perform the function as long as the total is greater than or equal to 5
    {
        total-=5; //subtract what is left from 5
        coins++; // add another coin to bank if it fits the statement
    }
    while(total>=1) //perform the function as long as the total is greater than or equal to 1
    {
        total-=1;//subtract what is left from 1
        coins++; // add another coin to bank if it fits the statement
    }
     }while (total>0); //after it hits zero,

    printf("Your change in coins is %d\n", coins); // ... print the amount of coins that are counted in the "bank"
}