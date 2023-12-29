// Identifying leap year or not using ternary operator

#include <stdio.h>

int main()
{
    int year;
    
    printf("Enter year: ");
    scanf("%d", &year);

    ((year % 4 == 0) && (year % 100 != 0)) ? printf("Leap Year\n") : (year % 400 == 0) ? printf("Leap Year\n") : printf("Not Leap Year");

    return 0;
}