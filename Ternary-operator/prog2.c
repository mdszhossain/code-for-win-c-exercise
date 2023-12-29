// Identifying maximum between three number

#include <stdio.h>

int main()
{
    int number1, number2, number3;

    printf("Enter number1: ");
    scanf("%d", &number1);
    printf("Enter number2: ");
    scanf("%d", &number2);
    printf("Enter number3: ");
    scanf("%d", &number3);

    ((number1 > number2) && (number1 > number3)) ? printf("Number 1 is large\n") : ((number2 > number3)) ? printf("Number 2 is large\n") : printf("Number 3 is large\n");

    return 0;
}