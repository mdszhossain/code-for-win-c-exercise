// Find the area of equilateral triangle

#include <stdio.h>
#include <math.h>

int main()
{
    int side;
    double area;

    printf("Enter the side of equilateral triangle: ");
    scanf("%d", &side);

    area = (sqrt(3) / 4.0) * pow(side, 2);

    printf("Area of equilateral triangle is: %0.2lf sq.units\n", area);

    return 0;
}