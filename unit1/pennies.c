#include <stdio.h> // header file with pre-established functions
#include <cs50.h> // header file with pre-established functions
#include <math.h> // header file with pre-established functions
int main(void) // starts your program

{
    int days; // declaring variable

do{ //run through the end of the block of code
    days = get_int("Day in the month: "); // get user input for the day in the month
    }
   // while (days<1&&days>31); // keep running this expression if the amount of days is less than 1 and if it's greater than 31
while (days<28||days>31);
 int pennies=1; //declaring variable
 //double total_dollars=1;
do{
    pennies = get_int("Amount of pennies on the first day: "); // get user input for the amount of pennies on the first day
}
while (pennies<=0); // keep giving them the user input line if the user inputs a negative number
int n; // declaring va./riable
double total = pennies; // declaring variable to set it equal to the pennies after another function
for (n=1; n<days; n++) // initializing the variable for when the value is 1, for when n is less than the amount of days, increments of 1 day
{
   total = total+pennies*pow(2,n); // the total so far from the previous days plus the amount of pennies from the next day and so on
}
    total = total*0.01; // formula to make it be in dollars not cents
    printf("Your total is $%0.2f\n", total); // print statement for the total as a float not int
}
