#include <cs50.h>
#include <stdio.h>
#include <string.h>

#include "structs.h"

#define STUDENTS 3

int main (void)
{
    student students [STUDENTS];

    for (int i=0; i<STUDENTS; i++)
    {
        printf ("name: ");
        students[i].name = get_string();

        printf("class" );
        students[i].class=get_string();
    }
FILE*file = fopen("students.csv", "w");
if (file!=NULL)
{
    for (int i=0; i<STUDENTS; i++)
    {
        fprintf(file, "%s, %s\n", students[i].name, students[i].class);
    }
    fclose(file);
}
}