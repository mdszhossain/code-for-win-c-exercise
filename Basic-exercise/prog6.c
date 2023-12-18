// Find Diameter, Circumference, Area of circle.

#include <stdio.h>
#include <math.h>

int main()
{
    int radius;
    const double pi = 3.14;
    double Diameter, Circumference, Area;

    printf("Enter radius: ");
    scanf("%d", &radius);

    Diameter = 2 * radius;
    Circumference = 2 * pi * radius;
    Area = pi * pow(radius, 2);

    printf("Diameter = %0.2lf units\n", Diameter);
    printf("Circumference = %0.2lf units\n", Circumference);
    printf("Area = %0.2lf sq.units\n", Area);

    return 0;
}