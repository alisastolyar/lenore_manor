#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (int argc, string argv [ ]) // indicates that your program is going to grab user input from the user at the command line
{
if (argc !=2)
{
    printf("missing command-line argument\n");
    return 1; //a certain value that the program reaches
}
    printf("Hello, %s!\n", argv[1]); // it will print only Hello, __ and then the second argument
}
