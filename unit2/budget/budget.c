#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include "budget.h"

int main(void)
{
    string name = get_string("Enter name: "); //get the user's name
    double salary = get_double("Enter salary: ");  // get the user's salary
    double rent = get_double("Enter rent payment: "); //get rent
    double cc_expense = get_double("Enter credit card expense: "); //get credit card expenses

    double expenses = (cc_expense + rent)/salary*HUNDRED_PERCENT; // function to find the percentage
    printf("%0.2f percent\n", expenses); // print percentage

}
