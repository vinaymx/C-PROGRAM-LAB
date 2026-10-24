/* 4. Program to accept three integers and determine the largest using nested if-else statemesnts.
      Display an appropriate message when two or all three numbers are equal. */
      

    #include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
    {
        printf("All three numbers are equal.\n");
    }
    else if (a == b)
    {
        if (a > c)
        {
            printf("Largest = %d\n", a);
        }
        else
        {
            printf("Largest = %d\n", c);
        }

        printf("First and second numbers are equal.\n");
    }
    else if (a == c)
    {
        if (a > b)
        {
            printf("Largest = %d\n", a);
        }
        else
        {
            printf("Largest = %d\n", b);
        }

        printf("First and third numbers are equal.\n");
    }
    else if (b == c)
    {
        if (b > a)
        {
            printf("Largest = %d\n", b);
        }
        else
        {
            printf("Largest = %d\n", a);
        }

        printf("Second and third numbers are equal.\n");
    }
    else
    {
        if (a > b)
        {
            if (a > c)
            {
                printf("Largest = %d\n", a);
            }
            else
            {
                printf("Largest = %d\n", c);
            }
        }
        else
        {
            if (b > c)
            {
                printf("Largest = %d\n", b);
            }
            else
            {
                printf("Largest = %d\n", c);
            }
        }
    }

    return 0;
}