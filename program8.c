/* 8.Write a C program to accept a positive integer and display the number of digits, sum
of digits and reversed number, and determine whether it is a palindrome.
Required input: A positive integer.*/


#include <stdio.h>

int main()
{
    int n, original, digit;
    int count = 0, sum = 0, reverse = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    original = n;

    while (n > 0)
    {
        digit = n % 10;

        sum = sum + digit;
        reverse = reverse * 10 + digit;
        count++;

        n = n / 10;
    }

    printf("Number of digits = %d\n", count);
    printf("Sum of digits = %d\n", sum);
    printf("Reversed number = %d\n", reverse);

    if (original == reverse)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}