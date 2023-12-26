// Identify the number is positive or negative or zero

#include <stdio.h>

int main()
{
    int number;

    printf("Enter the number: ");
    scanf("%d", &number);

    if(number > 0) {
        printf("Positive\n");
    } else if(number < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }

    return 0;
}