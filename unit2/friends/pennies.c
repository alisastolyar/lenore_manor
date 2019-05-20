#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int main (int argc, string argv []) // indicates that your program is going to grab user input from the user at the command line
{
if (argc!=3) // if there are not three arguments in total...
{
    printf("How to input: %s <days> <pennies on the first dayt>\n", argv[0]);// print how to input
    return 1; // to check if it failed
}
int days = atoi(argv[1]); // declare variable and convert to integer, is going to be the second argument in the vector
if (days<28||days>31) // has to be in between 28 and 31 days
{
    printf("%s is not in the range - [28, 31]\n", argv [1]); // print this if input for days is not between 28 and 31 in the second argument
    return 1;
}
int n=0; // declaring variable
int pennies=atoi(argv[2]);// declare variable and convert to integer - going to be the third argument
if (pennies<=0)
{
    printf("%s is not in the range\n", argv[2]);
    return 1;
}
double total = pennies; // declaring variable to set it equal to the pennies after another function
for (n=1; n<days; n++) // initializing the variable for when the value is 1, and with unlimited number of arguments, increments of 1 day
{
    total = total+pennies*pow(2,n); // equation to find the total amount after a certain amount of days
}
    total = total*0.01; // formula to make it be in dollars not cents
    printf("Your total is $%0.2f\n", total); // print statement for the total as a float not int
}