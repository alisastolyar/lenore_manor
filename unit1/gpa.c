#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string name = get_string("Enter your name here:");

    float GPA = get_float("Enter your GPA here:");


    if (GPA >= 4.0)
    {
    printf("YAYAY THATS AN AWESOME GPA, %s\n", name);
    }

    if (GPA < 4.0 && GPA >= 3.5)
    {
    printf("YAY thats a swell GPA,  %s\n", name);
    }

    if (GPA < 3.5 && GPA >=3)
    {
        printf("Thats a pretty good GPA, %s\n", name);
    }

     if (GPA < 3 && GPA >=2.5)
    {
       printf("Thats an okay GPA, %s\n", name);
    }

    if (GPA < 2.5 && GPA >=2)
    {
       printf("That GPA is so-so, %s\n", name);
    }

    if (GPA < 2)
    {
       printf("Umm maybe you should study a little bit more or get a tutor, you can do it, %s\n", name);
    }

}
