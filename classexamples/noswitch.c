#include <stdio.h>
#include <cs50.h>

int main(void) {
    char c = get_char("Answer: ");

    if (c == 'Y' || c == 'y')//now you can ask about two conditions --> || is 'or'
    {
        printf("yes\n");
    }
    else if (c == 'N' || c == 'n') //now you can ask about two conditions --> || is 'or'
    {
        printf("no\n");
    }
}