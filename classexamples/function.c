//includes
#include <cs50.h>
#include <stdio.h>

//declare function
int add_two_ints(int a, int b);

int main(void)
{

//ask user for input
    printf("Give me an integer: ");
    int x = get_int ();
    printf("Give me another integer: ");
    int y = get_int();

//add the two numbers together via a function call
int z = add_two_ints(x, y);
//output the result
printf("The sum of %i and %i is %i!\n", x, y, z);
}
//function definition
int add_two_ints(int a, int b)
{
    int sum=a+b;
    return sum;
}
