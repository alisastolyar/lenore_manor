#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int main (int argc, string argv []) // indicates that your program is going to grab user input from the user at the command line
{
 if (argc!=4) // if there are not four arguments in total...
{
    printf("How to input: %s <first number><space><operation><space><second number>\n", argv[0]);// print how to input
    return 1; // to check if it failed
}
int op1, op2, op3, op4, op5; // different operations (+, - , /, x, %);
float num1=(atof(argv[1])); // convert string into float for first number
float num2=(atof(argv[3])); // convert string into float for second number

op1=(strcmp(argv[2], "+")); //the string is compared to the opertor and if the operator is equal to the string it will be used in the if statments
op2=(strcmp(argv[2], "-")); //if they are equal it will output a value of zero
op3=(strcmp(argv[2], "x"));
op4=(strcmp(argv[2], "/"));
op5=(strcmp(argv[2], "%"));

if(op1==0) //if the operator is equal to +, it will output zero
{
    float solution=num1+num2; // make a new local variable to find the solution
    printf("%f\n", solution); // print the solution
    return 0;
}
if (op2==0) //if the operator is equal to -, it will output zero
{
    float solution=num1-num2; // make a new local variable for the difference of two numbers
    printf("%f\n", solution); // print this difference
     return 0;
}
if (op3==0) // if the operator is equal to x, it will output zero
{
    float solution=num1*num2; // make a new variable for the solution of two numbers multiplied together
    printf("%f\n", solution); // print the solution
     return 0;
}
if (op4==0) // if the operator is equal to /, it will output zero
{
    float solution=num1/num2; // create new variable for the quotient
    printf("%f\n", solution); // print the quotient
     return 0;
}
if (op5==0) // if the operator is equal to %, it will output zero
{
    float solution = fmod(num1, num2); // make a new variable for mod
    printf("%f\n", solution); // print mod
     return 0;
}
}