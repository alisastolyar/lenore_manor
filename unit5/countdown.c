#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int number=0;
    long long i=0;

do
{
    number = get_long_long("Enter a number: ");
}
while (number<0);

for (i=number; i>0; i--)
{
    printf("%lld\n", i);
}
return 1;
}

