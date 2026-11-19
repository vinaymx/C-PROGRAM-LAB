/* 20. Write a menu-driven C program to maintain student records containing register
number, name, marks in three subjects, total, percentage and result. Provide
operations to add records, display all records, search by register number, write records to a file 
and read records from a file.*/


#include <stdio.h>/**/
struct Student
{
    int regno;
    char name[30];
    int m1, m2, m3;
    int total;
    float percentage;
};

int main()
{
    struct Student s[50];
    int n = 0;
    int choice, i, search;
    FILE *fp;

    do
    {
        printf("\n\n--- STUDENT MENU ---");
        printf("\n1. Add Record");
        printf("\n2. Display Records");
        printf("\n3. Search Record");
        printf("\n4. Write to File");
        printf("\n5. Read from File");
        printf("\n6. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        /* 1. Add Record */
        if (choice == 1)
        {
            printf("\nEnter Register Number: ");
            scanf("%d", &s[n].regno);

            printf("Enter Name: ");
            scanf("%s", s[n].name);

            printf("Enter 3 Marks: ");
            scanf("%d %d %d", &s[n].m1, &s[n].m2, &s[n].m3);

            s[n].total = s[n].m1 + s[n].m2 + s[n].m3;

            s[n].percentage = s[n].total / 3.0;

            n++;

            printf("Record added successfully!");
        }

        /* 2. Display Records */
        else if (choice == 2)
        {
            for (i = 0; i < n; i++)
            {
                printf("\nRegister Number = %d", s[i].regno);
                printf("\nName = %s", s[i].name);
                printf("\nTotal = %d", s[i].total);
                printf("\nPercentage = %.2f", s[i].percentage);

                if (s[i].m1 >= 35 &&
                    s[i].m2 >= 35 &&
                    s[i].m3 >= 35)
                {
                    printf("\nResult = Pass");
                }
                else
                {
                    printf("\nResult = Fail");
                }
            }
        }

        /* 3. Search Record */
        else if (choice == 3)
        {
            printf("\nEnter Register Number: ");
            scanf("%d", &search);

            for (i = 0; i < n; i++)
            {
                if (s[i].regno == search)
                {
                    printf("\nRecord Found!");
                    printf("\nName = %s", s[i].name);
                    printf("\nTotal = %d", s[i].total);
                    printf("\nPercentage = %.2f", s[i].percentage);
                    break;
                }
            }

            if (i == n)
            {
                printf("\nRecord Not Found!");
            }
        }

        /* 4. Write to File */
        else if (choice == 4)
        {
            fp = fopen("student.txt", "w");

            if (fp == NULL)
            {
                printf("File cannot be opened!");
            }
            else
            {
                for (i = 0; i < n; i++)
                {
                    fprintf(fp, "%d %s %d %d %d %d %.2f\n",
                            s[i].regno,
                            s[i].name,
                            s[i].m1,
                            s[i].m2,
                            s[i].m3,
                            s[i].total,
                            s[i].percentage);
                }

                fclose(fp);

                printf("Records saved to file!");
            }
        }

        /* 5. Read from File */
        else if (choice == 5)
        {
            fp = fopen("student.txt", "r");

            if (fp == NULL)
            {
                printf("File not found!");
            }
            else
            {
                printf("\n--- Records From File ---\n");

                while (fscanf(fp, "%d %s %d %d %d %d %f",
                              &s[0].regno,
                              s[0].name,
                              &s[0].m1,
                              &s[0].m2,
                              &s[0].m3,
                              &s[0].total,
                              &s[0].percentage) == 7)
                {
                    printf("\nRegister Number = %d", s[0].regno);
                    printf("\nName = %s", s[0].name);
                    printf("\nTotal = %d", s[0].total);
                    printf("\nPercentage = %.2f\n", s[0].percentage);
                }

                fclose(fp);
            }
        }

        /* 6. Exit */
        else if (choice == 6)
        {
            printf("\nProgram Ended!");
        }

        else
        {
            printf("\nInvalid Choice!");
        }

    } while (choice != 6);

    return 0;
}