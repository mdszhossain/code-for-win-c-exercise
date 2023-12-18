// Converting CM (Centimeter) to M (meter) & KM (Kilometer).

#include <stdio.h>

int main()
{
    int centimeter;
    double meter, kilometer;

    printf("Enter the value in centimeter: ");
    scanf("%d", &centimeter);

    meter = centimeter / 100.0;
    kilometer = centimeter / 100000.0;

    printf("Meter: %0.2lf\n", meter);
    printf("Kilometer: %0.2lf\n", kilometer);

    return 0;
}