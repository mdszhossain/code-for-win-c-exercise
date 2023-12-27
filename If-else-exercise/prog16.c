// Checking the triangle is equlateral or isoscels or scalen

#include <stdio.h>

int main()
{
    int side1, side2, side3;

    printf("Enter side1: ");
    scanf("%d", &side1);
    printf("Enter side2: ");
    scanf("%d", &side2);
    printf("Enter side3: ");
    scanf("%d", &side3);

    if(side1 == side2 && side2 == side3 && side3 == side1) {
        printf("Equilateral\n");
    } else if(side1 == side2 || side2 == side3 || side3 == side1) {
        printf("Isosceles\n");
    } else {
        printf("Scalen\n");
    }

    return 0;
}