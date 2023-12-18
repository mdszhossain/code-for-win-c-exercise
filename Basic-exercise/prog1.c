// Input-Output of all basic data type.

#include <stdio.h>

int main()
{
    int integer_value;
    float floating_value;
    double big_floating_value;
    char character;

    printf("Enter integer_value: ");
    scanf("%d", &integer_value);

    printf("Enter floating_value: ");
    scanf("%f", &floating_value);

    printf("Enter big_floating_value: ");
    scanf("%lf", &big_floating_value);

    printf("Enter character: ");
    scanf(" %c", &character);

    printf("integer_value: %d\n", integer_value);
    printf("floating_value: %f\n", floating_value);
    printf("big_floaging_value: %0.2lf\n", big_floating_value);
    printf("character: %c\n", character);

    return 0;
}
