#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (int argc, string argv[ ])
{
    if (argc == 2) // looking for two argument counts specifically
{
    printf ("Hello, %s\n", argv[1]); //if you have exactly two arguments, this will print
}
else
{
    printf ("Hello, world\n"); // if you have less than two arguments or more than two arguments, this will print
}
}
/*if it has more than two arguments (ex. alisa stolyar), it'll print "Hello, world", if it has two arguments or less (ex. 12 or AS or D), it will
print "Hello, [what you entered]" -- needs to have a space seperating the two arguments*/