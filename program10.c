/* 10. Write a C program to:(a) determine whether a given integer is prime, and (b) display
all prime numbers between two user-specified limits. */


#include <stdio.h>

int main()
{
    int n, low, high;
    int i, isPrime;

    /* Part (a) */
    printf("Enter a number to check prime: ");
    scanf("%d", &n);

    isPrime = 1;

    if (n <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    /* Part (b) */
    printf("\nEnter lower and upper limits: ");
    scanf("%d %d", &low, &high);

    printf("Prime numbers between %d and %d are:\n", low, high);

    for (n = low; n <= high; n++)
    {
        if (n < 2)
            continue;

        isPrime = 1;

        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d ", n);
    }

    return 0;
}