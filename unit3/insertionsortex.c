//insertion sort ascending order
#include <stdio.h>

int main()
{
    int n, array[1000], i;

    printf ("Enter number of elements\n");
    scanf("%d", &n);

    printf("Enter %d integers\n", n);

    for (i=0; i<n; i++) // enter amount of values
      scanf("%d", &array[i]);

    for (i=1; i<=n-1; i++) // skips first and last element and starts with 1
    {
        int d=i;

        while (d>0 && array[d-1]>array[d]) // sorts values
        {
            int temp = array[d];
            array[d]=array[d-1];
            array[d-1]=temp;

            d--;
        }
    }
    printf("Sorted list in ascending order:\n");

    for (i=0; i<n; i++) // prints elements
    {
        printf("%d\n", array[i]);
    }
    return 0;
}