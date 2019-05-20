/*Program to rescue Queen Ada Lovelace. At the
command-line, a user should type a name as the
second argument. Students can provide their own
avatar name, or use example provided - Cinderella.*/

#define _XOPEN_SOURCE 500

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>



int main (int argc, string argv[])
{
 // indicates that your program is going to grab user input from the user at the command line
  int number, i=1, n=0, d=0;
  string array[5];


    printf("Welcome to your midterm quest. To receive a favorable score \n");
    printf("for your quest, you must rescue computer science Queen Ada Lovelace, \n");
    printf("who is stranded on a mountaintop after taking the wrong path in her \n");
    printf("own code. We all know bugs happen...\n\n");

    usleep(500000); //Programs a delay in printing to the screen

    printf("When you arrive for duty, you see a list of resources\n");
    printf("written out on a whiteboard. Each of those numbers represents\n");
    printf("a specific resource to help you on your rescue mission.\n\n");

    usleep(500000);

    printf("How many numbers do you see listed on the board?: \n");

    scanf("%d", &n); // gets amount of numbers from user

    usleep(500000);

    printf("Intrigued, you decide to enter those numbers here: \n");

 printf("Enter %d numbers\n", n); // command for user to enter numbers

int num[n];
for (i=0; i<n; i++) // enter amount of values up to max argument count (5)
{
      scanf("%d", &num[i]);
}
    usleep(500000);

    printf("Congratulations, those numbers represent some very important \n");
    printf("resources that you are going to need to rescue Ada!\n\n");

    usleep(500000);

 //assigning array values to objects
array[0]= "mice\n";
array[1]= "birds\n";
array[2]= "godmother\n";
array[3]= "slippers\n";
array[4]= "pumpkin\n";

       printf("However, these items are no good to you, unless you use them in the proper order.\n\n");

        usleep(500000);

        printf("You need the *mice* to help you find your fairy *godmother*, \n");
        printf("who will turn your *pumpkin* into a motorbike, your *slippers* into \n");
        printf("a great pair of hiking boots, and the *birds* into wilderness guides \n");
        printf("to lead you through the forest to the mountain where Ada is waiting \n");
        printf("to be rescued! \n\n");

        usleep(500000);

        printf("Let's get that list sorted!\n\n");

    printf("Sorted list in ascending order:\n\n");

int temp_number =0;
string temp_object=NULL;

    for (i=1;i<n;i++)// sorts values
        {

            if(num[i]<num[i-1]) //loops numbers through using temp values to order the list
            {
            temp_number = num[i]; // save number value
            temp_object = array[i];  // save string value that corresponds to the number
            num[i]=num[i-1]; // switch rows using temp value so it doesn't override
            num[i-1]=temp_number;
            array[i]=array[i-1];
            array[i-1]=temp_object;
            i=i-2; //go back to i-1 position

            }


        }

for (i=0; i<n; i++)//printing number values in the form of the objects in order
        {
        printf("%s\n",array[i]);
}
        usleep(1000000);

        printf("Congratulations! You've helped Cinderella save Ada Lovelace! Now who's the real hero?! ;) \n");

        return 0;

    }

