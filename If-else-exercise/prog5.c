// Checking the number is even or odd

#include <stdio.h>

int main()
{
    int number;

    printf("Enter the number: ");
    scanf("%d", &number);

    if(number % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }

    return 0;
}