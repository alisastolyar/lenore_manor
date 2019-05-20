#include <stdio.h> // header file with pre-established functions
#include <cs50.h> // header file with pre-established functions
//#include <math.h> // header file with pre-established functions
int main(void) // starts your program

{
int add_two_ints(int a, int b);
int a ;
int b ;
int c ;

a =get_int(printf("Give me a side: "));

    while(a<0) // will repeat until a is greater than 0
{
    printf("Give me a side: ");
}
    b =get_int(printf("Give me your second side: "));
    while(b<0) //will repeat until b is greater than 0
    {
    printf("Give me your second side: ");
    }
    c =get_int(printf("Give me your third side: "));
    while (c<0) //will repeat until c is greater than 0
    {
    printf("Give me your third side: ");
    }

    int ab = add_two_ints(a, b);

   if (ab < c)
   {
    printf("This is not a triangle.");
   }
    else if (ab>=c)
    {
        printf("This is a trangle.");
    }



}