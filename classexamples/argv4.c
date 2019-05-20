#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (int argc, string argv [ ]) // indicates that your program is going to grab user input from the user at the command line
{
            if (argc !=2) // if there are not exactly 2 arguments...
        {
            printf("missing command-line argument\n"); // it'll print "missing command-line argument"
            return 1; // built in check that you are giving yourself an indication that there is an issue  -- there must be an error?
        }
    {
        printf("Hello, %s\n", argv[1]); // if it is two, it will print hello, __
        return 0;
    }
}