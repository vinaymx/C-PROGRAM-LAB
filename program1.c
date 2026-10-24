/* 1.Program of two integers and their sum, difference, product, quotient and remainder */


#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a, b;
   printf("Enter two integers:");
   scanf("%d %d", &a,&b);
   printf("sum = %d\n", a+b); 
   printf("difference = %d\n", a-b);
   printf("product = %d\n", a*b); 
   if (b!=0)
   {
     printf("quotient = %d\n", a/b);
     printf("remainder = %d\n", a%b);
   }
   else
   {
    printf("division and remainder are not possible because divisor is zero .\n");
   }
   return 0;
}   