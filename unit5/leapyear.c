#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{

int year;
do
{
    year = get_int("Enter year (must be greater than zero): ");
}
while (year<=0);

if ((year%100!=0 && year%4==0) || year%400==0)
{
    printf("This year is a leap year.\n");
}
else
{
    printf("This year is NOT a leap year.\n");
}
return 1;
}