// Calculating square root of a number.

#include <stdio.h>
#include <math.h>

int main()
{
    int number;
    double square_root;

    printf("Enter any number: ");
    scanf("%d", &number);

    square_root = sqrt(number);

    printf("Square root of %d is %0.1lf\n", number, square_root);

    return 0;
}