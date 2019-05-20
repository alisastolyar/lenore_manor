#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (int argc, string argv [ ]) // indicates that your program is going to grab user input from the user at the command line
{
    for (int i = 0; i < argc; i++) // not limited to the amount of arguments, if you were to write out a novel, it would print every single word
{
    printf ("%s\n", argv[i]);
}
}
// it will print whatever you type after ./argv2 vertically string by string