#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (int argc, string argv []) // indicates that your program is going to grab user input from the user at the command line
{
    if (argc!=2) // if there are not two arguments in total...
{
    printf("How to input: %s <celcius>", argv[0]);// print how to input
    return 1; // to check if it failed
}
    float celsius = atof(argv[1]); // declare variable and convert to float  - going to be second argument
    float fahrenheit = ((celsius * 9) / 5) + 32; // declare variable and formula to convert C to F

    printf("%.1f\n", fahrenheit); // print the value to two decimal points
}
