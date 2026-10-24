/* 2.Program to calculate (a) area and perimeter of arectangle (b) area and circumference of a circle 
     (c) area of triangle using half × base × height */


#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float length, width;
    float radius;
    float base, height;
    float area, perimeter, circumference;

    /* Rectangle */
    printf("Enter lenghth and width of rectangle: ");
    scanf("%f %f", &length, &length);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("Rectangle Area = %.2f\n", area);
    printf("Rectangle perimeter = %.2f\n", perimeter);

    /* Circle */
    printf("\n Enter radius of circle: ");
    scanf("%f", &radius);

    area = 3.14159 * radius * radius;
    circumference = 2 * 3.14159 * radius;
    
    printf("Circle Area = %.2f\n", area);
    printf("Circle Circumference = %.2f\n", circumference);

    /* Triangle */
    printf("\n Enter base and height of triangle: ");
    scanf("%f %f", &base, &height);

    area = 0.5 * base * height;

    printf("Triangke Area = %.2f\n", area);

    return 0;

}