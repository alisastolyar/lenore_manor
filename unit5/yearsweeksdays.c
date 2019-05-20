#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
int total_days;
int years=0;
int weeks=0;
int days;

do
{
    total_days = get_int("Amount of days: ");
}
while (total_days<365);

years = (int)(total_days/365);
weeks = (int)(total_days%365)/7;
days = total_days-years*365-weeks*7;
printf ("%d year(s), %d week(s), %d day(s)\n", years, weeks, days);

return 1;
}
