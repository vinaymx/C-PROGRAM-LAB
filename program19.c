/* 19.Write a C program to dynamically allocate memory for n integers using malloc) or
calloc), accept the elements, calculate sum and average, find the largest and smallest
values using pointer notation, and release the memory using free().*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, n, i;
    int sum = 0;
    int largest, smallest;
    float average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    p = (int *)malloc(n * sizeof(int));

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }

    largest = *p;
    smallest = *p;

    for(i = 0; i < n; i++)
    {
        sum = sum + *(p + i);

        if(*(p + i) > largest)
            largest = *(p + i);

        if(*(p + i) < smallest)
            smallest = *(p + i);
    }

    average = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);
    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);

    free(p);

    return 0;
}