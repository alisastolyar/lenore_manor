#include <stdio.h>
#define SIZE 5

int sum (int x, int y []); //function declaration

int main (void)

{
    int array[] = {1, 2, 3, 4, 5);
    int counter=0

    //Iterative
    for (int=0; i<SIZE; i++)/* for every time i<5,
    we're going to incrememnt one more (loop stops when i becomes 5*/
    {
        counter=counter+array[i]; /* counter is equal to sum of all 5 elements
        (or instances of i, which in this case is 15)*/
    }
    printf ("Iterprative sum = %i\n", counter);

    int z = 0; /*I added this variable so we'd jave something to reference
    in the recursive printf statement*/

    //Recursive
    printf("Recursive sum = %i\n", sum (SIZE-1, array)+array[z]);
    //function being called above
    return 0;
    }

    int sum(int x, int y [])
    {
        if (x==0)//if the size of the array is 0, return 0
        return 0;
        else
            return sum(x-1, y) + y[x]; //otherwise sum the last element of the array with the rest of the array

            /* x refers to the size of the array, so subtract one from the size of the array
            (here that would be 4); add those first 4 elements (in this case that would be
            10 because 1+2+3+4=10), and then add the last element (which is 5 in this example)
            to the sum of those first elements (10+5=15). */
    }
}