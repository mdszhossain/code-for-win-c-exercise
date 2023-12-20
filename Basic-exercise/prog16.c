// Calculating 5 subjects (Total, Average & Percentages).

#include <stdio.h>

int main()
{
    int mark1, mark2, mark3, mark4, mark5, total;
    double average, percentages;

    printf("Enter marks of 5 subjects respectively: ");
    scanf("%d %d %d %d %d", &mark1, &mark2, &mark3, &mark4, &mark5);

    total = mark1 + mark2 + mark3 + mark4 + mark5;
    average = total / 5.0;
    percentages = (total / 500.0) * 100.0;

    printf("Total: %d\n", total);
    printf("Average: %0.1lf\n", average);
    printf("Percentages: %0.1lf\n", percentages);

    return 0;
}