#include <cs50.h>
#include <stdio.h>
#include <string.h>

#include "structs.h"

#define STUDENTS 3

int main(void)
{
    student students [STUDENTS]; /*create a structure type student called students,
    of size 3 because STUDENTS is a defined constant*/

    for (int i=0; i<STUDENTS; i++) // while i is less than STUDENTS (3)
    {
        printf("name: "); // ask for the student's name
        students[i]. name = get_string(); // stores the student's name inside the structure

        printf("class: "); // ask student for class year
        students[i]. class = get_string(); // stores the stydent's class year inside the structure
    }

    for (int i=0; i<STUDENTS; i++)// while i is less than STUDENTS(3)
    {
        //print the student name and class after going inside the student
        //struct to retrieve the data
        printf("%s is %s. \n", students[i]. name, students [i]. class);
    }
}