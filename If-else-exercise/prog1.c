// Finding maximum between two numbers.

#include <stdio.h>

int main()
{
    int number1, number2;

    printf("Enter first number: ");
    scanf("%d", &number1);

    printf("Enter second number: ");
    scanf("%d", &number2);

    if(number1 > number2){
        printf("%d is maximum.\n", number1);
    }else{
        printf("%d is maximum.\n", number2);
    }

    return 0;
}