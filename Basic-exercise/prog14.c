// Find area of triangle.

#include <stdio.h>

int main()
{
    int base, height;
    double area;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter height: ");
    scanf("%d", &height);

    area = (base * height) / 2.0;

    printf("Area of triangle is: %0.1lf\n", area);

    return 0;
}