// checking a number is even or odd

#include <stdio.h>

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    (number % 2 == 0) ? printf("Even\n") : printf("Odd\n");

    return 0;
}