/* 11.Write a C program to calculate the factorial of a non-negative integer and generate
the Fibonacci series for a specified number of terms. */


#include <stdio.h>

int main()
{
    int n, i;
    long long fact = 1;
    int a = 0, b = 1, c;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // Factorial
    for(i = 1; i <= n; i++)
        fact = fact * i;

    printf("Factorial = %lld\n", fact);

    // Fibonacci series
    printf("Fibonacci Series: ");
    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}