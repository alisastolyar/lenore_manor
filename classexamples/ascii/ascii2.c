#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    printf("What is your name? ");
    string s = get_string();

    if (s!=NULL)
    {
        for(int i=0, n=strlen(s); i<n; i++)
        {
            printf("%c", toupper(s[i]));
    }
    printf("\n");
}
}
//this is more efficient than ascii1 because it's shorter code - more compact