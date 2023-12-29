// Finding maximum between two number

#include <stdio.h>

int main()
{
    int number1, number2;

    printf("Enter number1: ");
    scanf("%d", &number1);
    printf("Enter number2: ");
    scanf("%d", &number2);

    (number1 > number2) ? printf("Number 1 is large\n") : printf("Number 2 is large\n");

    return 0;
}