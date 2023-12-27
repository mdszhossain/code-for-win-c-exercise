// Writing week number and printing week day name

#include <stdio.h>

int main()
{
    int week_number;

    printf("Enter week number: ");
    scanf("%d", &week_number);

    if(week_number == 1) {
        printf("Monday\n");
    } else if(week_number == 2) {
        printf("Tuesday\n");
    } else if(week_number == 3) {
        printf("Wednesday\n");
    } else if(week_number == 4) {
        printf("Thursday\n");
    } else if(week_number == 5) {
        printf("Friday\n");
    } else if(week_number == 6) {
        printf("Saturday\n");
    } else if(week_number == 7) {
        printf("Sunday\n");
    } else {
        printf("Invalid Week Number\n");
    }

    return 0;
}