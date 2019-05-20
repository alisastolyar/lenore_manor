#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long long isbn; //declares long long variable named isbn

    //initializing variable isbn to be equal to user input
    isbn = get_long_long("Please enter an ISBN: ");

    int tenth = isbn % 10; //this will return the last digit in the long long isbn
    //when you mod by 10, the remainder you get is the last digit, known as check digit
    //we're going to want this tenth digit later in our program

    int sum = 0; //declaring and intializing sum value to start at 0

    // loop that "chomps" off each digit of ISBN, adding it
    // to a total per the formula in the spec
    for (int i = 9; i > 0; i--) {
        isbn = isbn/10; //this cuts last digit off isbn
        //when you divide by 10, you move the decimal one place to the left
        sum = sum + (isbn % 10) * i; //setting sum equal to previous sum plus (digit MOD 10) times i (coefficient)
    }

    //ternary operator to print YES if sum modded by 11 is the equivalent of the 10th digit
    //otherwise print NO
    printf("%s\n", ((sum % 11) == tenth) ? "YES" : "NO");
    return 0;
}
