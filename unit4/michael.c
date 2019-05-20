#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

void checker(string abc, int l, int d, int e);

int main(void)
{

    string palindrome = get_string("Enter Word: ");
    int n = strlen(palindrome);
    char first = 0, last = n-1;

    checker(palindrome, n, first, last);
    return 0;
}


void checker(string abc, int l, int d, int e)
{

    if (abc[d] != abc[e])
    {
        printf("This word is NOT a palindrome!\n");
        return;
    }
    else if (l == 1 || l == 0)
    {
        printf("This word is indeed a palindrome!\n");
        return;
    }
    else
    {
        return checker(abc, l-2, d++, e--);
    }
}
