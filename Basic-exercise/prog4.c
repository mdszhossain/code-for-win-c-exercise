// Find the perimeter of a rectangle using length and breadth.

#include <stdio.h>

int main()
{
    int length, breadth, perimeter;

    printf("Enter length: ");
    scanf("%d", &length);

    printf("Enter breadth: ");
    scanf("%d", &breadth);

    perimeter = 2 * (length + breadth);

    printf("Perimeter of rectangle is: %d\n", perimeter);

    return 0;
}