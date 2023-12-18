// Summation of two integer numbers.

#include <stdio.h>

int main()
{
    int number1, number2, summation;

    printf("Enter number1: ");
    scanf("%d", &number1);

    printf("Enter number2: ");
    scanf("%d", &number2);

    summation = number1 + number2;

    printf("Summation of two number is: %d\n", summation);

    return 0;
}