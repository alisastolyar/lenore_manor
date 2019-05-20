#include <stdio.h> // header file with pre-established functions
#include <cs50.h> // header file with pre-established functions
#include <math.h> // header file with pre-established functions
int main(void) // starts your program
{
unsigned int a = 0;
long long isbn = 0; //long integer
int digits=10; // 10 digits in isbn
isbn = get_long_long("Insert ISBN: "); // get user input of isbn

int tenth = isbn%10; // returns last digits in long long isbn

int i=0;
while(tenth>=0)
a = a + (isbn % 10)*i;
{
    tenth=tenth/10;
    i++;
}
    if(tenth<=0)
    {
        tenth=1 ;
    }
   //if(i==10 && tenth>1)
      //  break;

       if(i!=10)
       {
        printf("No\n");
     }


        if(i==10)
        {
        printf("Yes\n");
        }



printf("%s\n", ((a%11)==tenth)?"Yes":"No");
return 0;
}//didn't finish this code
