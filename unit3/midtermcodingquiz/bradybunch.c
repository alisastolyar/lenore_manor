
#define _XOPEN_SOURCE 500

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, string argv[]) {

float marcia_gpa1;
float marcia_gpa2;
float jan_gpa1;
float jan_gpa2;
float cindy_gpa1;
float cindy_gpa2;
float greg_gpa1;
float greg_gpa2;
float peter_gpa1;
float peter_gpa2;
float bobby_gpa1;
float bobby_gpa2;
float maverage;
float javerage;
float caverage;
float gaverage;
float paverage;
float baverage;



    printf("Welcome to your midterm challenge. To receive a favorable score \n");
    printf("you must help the guidance counselors of Old Sitcom High School \n");
    printf("determine the highest GPA, for each grade. The school year is \n");
    printf("coming to a close and class rankings are due!\n\n");

    usleep(500000); //Just used to program a pause between print statements

    printf("When you arrive at the guidance office, you see a list of student\n");
    printf("GPAs for each grade written out on a whiteboard. You need to\n");
    printf("write a program that will sort those GPAs, lowest to highest,\n");
    printf("for each grade. Depending on what grade the user of your program\n");
    printf("enters at the command-line will determine what group you tackle first.\n");
    printf("For the purposes of this assignment, you are going to focus on the 9th\n");
    printf("grade class. Good Luck!\n\n");

    usleep(500000);

 // Ensure proper usage
    if (argc != 2)
    {
        printf("Usage: bradybunch <grade>\n");
        return 1;
    }
    if (atoi(argv[1])<9 || atoi(argv[1])>12)
    {
        printf("Must be grades 9-12.");
        return 1;
    }


    printf("\n");


    //TO DO: After you obtain the Semester 1 and 2 GPAs, you need to average them to get one overall GPA
 marcia_gpa1 = get_float("What is Marcia's semester 1 GPA?:\n");
 marcia_gpa2 = get_float("What is Marcia's semester 2 GPA?:\n");
 jan_gpa1 = get_float("What is Jan's semester 1 GPA?:\n");
 jan_gpa2 = get_float("What is Jan's semester 2 GPA?:\n");
 cindy_gpa1 = get_float("What is Cindy's semester 1 GPA?:\n");
 cindy_gpa2 = get_float("What is Cindy's semester 2 GPA?:\n");
 greg_gpa1 = get_float("What is Greg's semester 1 GPA?:\n");
 greg_gpa2 = get_float("What is Greg's semester 2 GPA?:\n");
 peter_gpa1 = get_float("What is Peter's semester 1 GPA?:\n");
 peter_gpa2 = get_float("What is Peter's semester 2 GPA?:\n");
 bobby_gpa1 = get_float("What is Bobby's semester 1 GPA?:\n");
 bobby_gpa2 = get_float("What is Bobby's semester 2 GPA?:\n");




   usleep(500000);

    printf("The GPA averages for each sibling are: \n\n");
//finding averages
maverage = (marcia_gpa1 + marcia_gpa2)/2;
javerage = (jan_gpa1 + jan_gpa2)/2;
caverage = (cindy_gpa1 + cindy_gpa2)/2;
gaverage = (greg_gpa1 + greg_gpa2)/2;
paverage = (peter_gpa1 + peter_gpa2)/2;
baverage = (bobby_gpa1 + bobby_gpa2)/2;


    usleep(500000);

//printing averages
printf("Marcia's average GPA is: %.2f\n", maverage);
printf("Jan's average GPA is %.2f\n", javerage);
printf("Cindy's average GPA is %.2f\n", caverage);
printf("Greg's average GPA is %.2f\n", gaverage);
printf("Peter's average GPA is %.2f\n", paverage);
printf("Bobby's average GPA is %.2f\n", baverage);

    printf("\n");


    usleep(500000);
//attaching names to array values
    printf("Those GPA averages in sorted order are as follows: \n\n");
int i;
    float averages[6];
    string names[6];
    float temp;
    string temp_name;
    averages[0]=maverage;
    names[0]= "Marcia";
    averages[1]=javerage;
    names[1]="Jan";
    averages[2]=caverage;
    names[2]="Cindy";
    averages[3]=gaverage;
    names[3]="Greg";
    averages[4]=paverage;
    names[4] = "Peter";
    averages[5]=baverage;
    names[5]="Bobby";

for (i=1;i<6;i++)// sorts values
        {
            if(averages[i]<averages[i-1])
            {
            temp = averages[i]; // save value
            temp_name=names[i];
            averages[i]=averages[i-1]; // switch rows using temp value so it doesn't override
            names[i]=names[i-1];
            names[i-1]=temp_name;
            averages[i-1]=temp;

             if(i>1)
            {
                 i=i-2; //go back to i-1 position

            }

            }


        }

for(i=0; i<6; i++) // prints values in order
{
    printf("%.2f\n", averages[i]);
}
printf("%s is the student with the highest GPA in their 9th grade class! Good job %s, your hard work paid off!!", names[5], names[5]);
printf("\n");

}


