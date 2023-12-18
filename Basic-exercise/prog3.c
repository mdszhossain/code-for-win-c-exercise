// performing all arithmatic operation using integers.

#include <stdio.h>

int main()
{
    int number1, number2;

    printf("Enter number1: ");
    scanf("%d", &number1);

    printf("Enter number2: ");
    scanf("%d", &number2);

    printf("Summation --> %d + %d = %d\n", number1, number2, number1 + number2);
    printf("Subtraction -> %d - %d = %d\n", number1, number2, number1 - number2);
    printf("Multiplication -> %d * %d = %d\n", number1, number2, number1 * number2);
    printf("Division -> %d / %d = %d\n", number1, number2, number1 / number2);
    printf("Modulo -> %d %% %d = %d\n", number1, number2, number1 % number2);

    return 0;
}