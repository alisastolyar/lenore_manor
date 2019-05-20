#include <stdio.h>
#include <cs50.h>

#define CLASS_SIZE 30 //CLASS_SIZE is a constant that we are giving a value of 30

int main(void)
{
    int scores_array [CLASS_SIZE]; //establishing an array of 30 scores

    for (int i=0; i < CLASS_SIZE; i++) //loop through all 30 students to get a score for each
    {
        printf("Enter score for student %d: ", i);
        scores_array [i] = get_int(); //populating the scores_array with the scores inputted for each student
    }

    for (int i=0; i < CLASS_SIZE; i++){ //another for loop to print the scores in the array
    if (i==29) //if i is 29 (meaning score for student 30)
    {
        printf("%i", scores_array[i]); //print the score

    } else {

        printf("%i, ", scores_array[i]); //otherwise print the score followed by a comma (for students 0 - 28)
    }

}
 printf("\n"); //print a new line
}

