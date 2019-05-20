#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv [])

{
      if (argc>2) // if there are more than 2 arguments in total...
{
    printf("How to input: %s <word>\n", argv[0]);// print how to input
    return 1;
}

string word=""; //empty string
 int length;
 if (argc==1) //if there isn't anything after ./palindrome, the length is zero
 {
    length=0;
 }
 else //otherwise you assign whatever is provided to the variable, word
 {
    word= argv[1]; //word is one argument
 }
int first=0, last, middle, counter, i=0; // declare variables
bool is_palindrome=true ; //assume it will be palindrome


length = strlen(word); //find the length of the word

if (length>1) // if the length is zero or one then it is always a palindrome but if it's more then it has to run through the loop
{
    last = length-1; //the index of the last letter in the word is the length minus one because it starts with zero
    counter = length; //the amount of letters to process
    while (counter>1) // while the counter is greater than 1...
    {
        if (word[first+i]!=word[last-i])// continue comparing each two letters while getting closer to the middle
        is_palindrome=false; //if at least one pair are not equal, it is not a palindrome
        i++; //will keep incrementing to get closer to the middle
        counter=-2; //counter checks two letters at a time
         break;
    }


}
if(is_palindrome) // if it is a palindrome
    {
        printf("This is, in fact, a palindrome.\n");//print
    }
else //if it's not a palindrome
    {
        printf("Sorry! This isn't a palindrome. :(\n");//print
    }

return 0;
}

