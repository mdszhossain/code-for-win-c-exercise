// Convert temperature Fahrenheit to Celsius

#include <stdio.h>

int main()
{
    int fahrenheit;
    double celsius;

    printf("Enter temperature in fahrenheit: ");
    scanf("%d", &fahrenheit);

    celsius = (fahrenheit - 32) * (5.0 / 9.0);

    printf("The temperature in celsius: %0.2lf C", celsius);

    return 0;
}