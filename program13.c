/* 13. Write a C program to accept n integers into an array and calculate the sum, arithmetic
mean, largest value, smallest value, number of even elements and number of odd elements.*/


#include <stdio.h>

int main()
{
    int a[100], n, i;
    int sum = 0, max, min;
    int even = 0, odd = 0;
    float average;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = min = a[0];

    for(i = 0; i < n; i++)
    {
        sum = sum + a[i];

        if(a[i] > max)
            max = a[i];

        if(a[i] < min)
            min = a[i];

        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    average = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);
    printf("Largest = %d\n", max);
    printf("Smallest = %d\n", min);
    printf("Even elements = %d\n", even);
    printf("Odd elements = %d\n", odd);

    return 0;
}