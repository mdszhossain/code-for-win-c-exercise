// Calculating compound interest.

#include <stdio.h>
#include <math.h>

int main()
{
    int principle_amount, time;
    double interest_rate, compound_interest;

    printf("Enter principle amount: ");
    scanf("%d", &principle_amount);

    printf("Enter time: ");
    scanf("%d", &time);

    printf("Enter interest rate: ");
    scanf("%lf", &interest_rate);

    compound_interest = principle_amount * (pow((1 + (interest_rate / 100.0)), time));

    printf("Compound Interest is: %lf\n", compound_interest);

    return 0;
}