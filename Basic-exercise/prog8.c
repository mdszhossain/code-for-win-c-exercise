// Converting Celsius to Fahrenheit.

#include <stdio.h>

int main()
{
    int celsius;
    double fahrenheit;

    printf("Enter temperature in celsius: ");
    scanf("%d", &celsius);

    fahrenheit = (celsius * (9.0 / 5)) + 32;

    printf("Converted celsius to fahrenheit: %0.2lf F\n", fahrenheit);

    return 0;
}