#include <stdio.h> // header file with pre-established functions
#include <cs50.h> // header file with pre-established functions
#include <math.h> // header file with pre-established functions
int main(void) // starts your program

{
    int height; // declaring variable
    do{ //run the block of code
    height = get_int("Height of pyramid: "); // get user input of the height of the pyramid
    }

    while (height<=0||height>23); // keep asking what the height is if it is less than one or greater than 23

    int h; // declaring variable
    int spaces; // declaring variable
    int hashes; // declaring variable
   for(h=1; h<=height; h++) // when h is equal to one, keep repeating it as long as it is less than or equal to the height, and by increments of 1 (#)
   {
    for(spaces=(height-h); spaces>0; spaces--) // when going lower by each row, decrease the amount of spaces by 1
       {
          printf(" "); // print spaces
       }
        for(hashes=1; hashes<=(h+1); hashes++) // increase hashes by one as the rows increase until it reaches the max height
        {
            printf("#"); // print # for instructed amount
        }
        printf("\n"); // print 'enter' for each row

   }

}