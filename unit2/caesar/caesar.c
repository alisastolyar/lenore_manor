#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include "caesar.h"

int main (int argc, string argv []) // indicates that your program is going to grab user input from the user at the command line
{
    if (argc!=2) // there has to be 2 arguments
    {
        printf("Correct input: %s <shift key>\n", (argv[0])); // print how to correctly input into the command line
        return 1;
    }
    int key;
   key= atoi(argv[1]); // convert the key into an integer from a string
   if (key<0) //if the key is less than zero...
   {
       printf("Key should be greater than zero"); // explain that the key cannot be greater than zero
       return 1;
   }
   string text;
   int length;
   text = get_string("Input text: "); // get input for the plaintext
  length = strlen(text); //find the length of the plaintext
            for(int n=0; n<length; n++) //evaluates the length
            {
                if(isalpha(text[n])) //checks if it's in the alphabet
                {
                    if(islower(text[n])) //works with lowercase letters
                    {
                    printf("%c", LOWERCASE;
                    }
                    else //if it's not lowercase, use an  uppercase function
                    {
                    printf("%c", UPPERCASE;
                    }
                }
                else // afterword, print the encoded message
                {
                    printf("%c", text[n]);
                }
    }
    printf("\n"); // print enter
    return 0;
}

