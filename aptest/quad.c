#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include "quad.h"

int main(void)
{
int a=1, b=0, c=0;
float sol1;
float sol2;

do
{
    a = get_int("'a' value: ");
}
while (a==0);

    b = get_int("'b' value: ");
    c = get_int("'c' value: ");

double discriminant;
discriminant = (b*b)-(4*a*c);

sol1 = QUAD1;
sol2 = QUAD2;

        if (discriminant>0)
        {
        printf("There are two real solutions.\n");
        printf("The solutions are %0.2f and %0.2f. \n", sol1, sol2);
        }
            else if (discriminant==0)
            {
            sol1=sol2;
            printf("There is one real solution.\n");
            printf("The solution is %0.2f. \n", sol2);
            }
                else
                {
                printf("There are no real solutions.\n");
                }
    return 1;
}