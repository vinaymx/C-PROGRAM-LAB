/* 18. Write a menu-driven C program containing separate user-defined functions to
calculate greatest common divisor, least common multiple, factorial using recursion
and x raised to n using recursion.*/


#include <stdio.h>

int gcd(int a, int b)
{
    if(b == 0)
        return a;

    return gcd(b, a % b);
}

int factorial(int n)
{
    if(n == 0)
        return 1;

    return n * factorial(n - 1);
}

int power(int x, int n)
{
    if(n == 0)
        return 1;

    return x * power(x, n - 1);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int choice, a, b, n, x;

    printf("1. GCD\n");
    printf("2. LCM\n");
    printf("3. Factorial\n");
    printf("4. Power\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);

        printf("GCD = %d", gcd(a, b));
    }
    else if(choice == 2)
    {
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);

        printf("LCM = %d", lcm(a, b));
    }
    else if(choice == 3)
    {
        printf("Enter number: ");
        scanf("%d", &n);

        printf("Factorial = %d", factorial(n));
    }
    else if(choice == 4)
    {
        printf("Enter x and n: ");
        scanf("%d %d", &x, &n);

        printf("Answer = %d", power(x, n));
    }
    else
    {
        printf("Invalid choice");
    }

    return 0;
}