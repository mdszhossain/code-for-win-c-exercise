// Find power of any number
// Note: pow() function returns a floating value.

#include <stdio.h>
#include <math.h>

int main()
{
    int base, exponent;
    double power;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    power = pow(base, exponent);

    printf("Power --> %d^%d is: %0.0lf\n", base, exponent, power);

    return 0;
}