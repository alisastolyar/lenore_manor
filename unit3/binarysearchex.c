#include <stdio.h>

int main ()
{
    int i, first, last, middle, n, search, array[100]; //declaring variables

    printf("Enter number of elements\n"); // enter number of elements
    scanf("%d", &n);

    printf("Enter %d integers\n", n); // asks to enter values

    for (i=0; i<n; i++)
        scanf("%d", &array[i]);

    printf("Enter value to find\n");
    scanf("%d", &search);

    first = 0; // start from zero
    last = n-1; // last element in array
    middle = (first+last)/2; // middle element in array

    while (first<=last) // binary search
    {
        if (array[middle]<search) // element is less than search
            first=middle+1;
        else if (array[middle]==search) // element is equal to search
        {
            printf("%d found at location %d.\n", search, middle+1);
            break;
        }
        else // element is greater than search
            last = middle-1;
        middle = (first+last)/2; // find new middle
    }
    if (first>last) //  every time it decreases, there is a new last+first
        printf ("Not found! %d isn't present in the list. \n", search); // not found in the middle of new list
    return 0;
}
