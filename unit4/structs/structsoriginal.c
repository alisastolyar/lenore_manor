#include <cs50.h>
#include <stdio.h>
#include <string.h>

#include "structs1.h"

#define PERSON 3

int main (void)
{
    person person [PERSON];//first one is structure, second one is constant, third is name of array

    for (int i=0; i<PERSON; i++)
    {
        printf ("Name: ");
        person[i].name = get_string();

        printf("Year born: " );
        person[i].year=get_string();
    }
FILE*file = fopen("person.csv", "w");
if (file!=NULL)
{
    for (int i=0; i<PERSON; i++)
    {
        fprintf(file, "%s, %s\n", person[i].name, person[i].year);
    }
    fclose(file);
}
}