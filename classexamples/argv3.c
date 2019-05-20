#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (int argc, string argv [ ]) // indicates that your program is going to grab user input from the user at the command line
{
    //iterate over strings in argv[]
    for (int i = 1; i < argc; i++) //if i=0, it'll print the command but if i=1 then it'll skip the command and print the first word
{
    //iterate over characters in current string
    for (int j = 0, n = strlen(argv[i]); j<n; j++)
{
    //print jth character of ith string
    printf("%c\n", argv[i][j]);
}
}
}
// this would print all of your arguments including the ./argv3 in a column - it grabs not just the arguments but the characters within the arguments