// Calculating simple interest.

#include <stdio.h>

int main()
{
    int principle, time;
    double interest_rate, simple_interest;

    printf("Enter principle amount: ");
    scanf("%d", &principle);
    
    printf("Enter time: ");
    scanf("%d", &time);

    printf("Enter interest rate: ");
    scanf("%lf", &interest_rate);

    simple_interest = (principle * time * interest_rate) / 100.0;

    printf("Simple Interest is: %0.2lf\n", simple_interest);

    return 0;
}