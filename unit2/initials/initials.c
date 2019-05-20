#include <stdio.h> // header file with pre-established functions
#include <cs50.h> // header file with pre-established functions
#include <string.h> //header file with pre-established functions
#include <ctype.h> //header file with pre-established functions

int main(void) // starts your program
{
    string name = get_string("Enter your full name: "); //get the user's name

    printf("%c", toupper(name[0])); //grab the first initial and make the initial uppercase

int length = strlen(name); // find the length of the string (name)

for (int m = 0; m<length; m++) // will check for spaces and count initials for the entire length of the string
{
    if(name[m]==' ')  //not allowed to be more than one space
    {
    printf("%c", toupper(name[m+1])); // print the initial and move onto the next initial after the space, in uppercase (toupper)
    }
}
 return 0; // return to beginning
}