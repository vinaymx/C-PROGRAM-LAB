/* 15. Write a C program to sort n integers using bubble sort and display the original array,
ascending-order array and descending-order array.*/


#include <stdio.h>

int main()
{
    int a[100], n;
    int i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Original Array: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    /* Ascending */
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\nAscending Order: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    /* Descending */
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\nDescending Order: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}