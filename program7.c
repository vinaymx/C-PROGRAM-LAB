/* 7. Write a C program to calculate an electricity bill using the following progressive
slabs: first 50 units at Rs. 1.50 per unit; next 100 units at Rs. 2.50 per unit; next 100
units at Rs. 4.00 per unit; units above 250 at Rs. 6.00 per unit. Add a fixed meter
charge of Rs. 100. */


#include <stdio.h>

int main ()
{
    int units;
    float bill = 0;
    
    printf("Enter electricity units consumed: ");
    scanf("%d", &units);
    
    if (units <= 50)
    {
        bill = units *1.50;
    }
    else if  (units <=150)
    {
        bill = (50 * 1.50)+
               ((units - 50) * 2.50);
    }
    else if (units <= 250)
    {
        bill =(50 * 1.50) +
              (100 * 2.50) +
              ((units - 150) * 4.00);
    }
    else 
    {
        bill = (50 * 1.50) +
               (100 * 2.50) +
               (100 * 4.00) +
               ((units - 250) * 6.00);
    }
    
    bill = bill + 100;
    
    printf("Electricity Bill = Rs. %.2f\n", bill);
    
    return 0;
}