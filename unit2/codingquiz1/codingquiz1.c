#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)

{
    string name = get_string("Enter your name: ");
    printf("Hi, %s! As a beginner programmer, you often have a few bugs when compiling your programs for the first time.\n This program will ask you for the number of bugs you typically find when you compile your programs. \n For the sake of this exercise, please enter a number between 5 and 15 at the prompt.\n", name);
    int bugs=0;
    while (bugs<5 || bugs>15) // repeat prompt if amount of bugs is greater than 15 or less than 5
    bugs = get_int("How many bugs are there in your code? ");
    int i;
 for (i=bugs-1; i>bugs; bugs--) //
    {
    while (i<0)
   {
    printf("%d bugs in the code, take one down, patch it around, %d little bugs in the code.\n", bugs);
    }
    }
    printf("Nice job, %s, you've successfully debugged your latest program!"\n, name);
    return 0;
}