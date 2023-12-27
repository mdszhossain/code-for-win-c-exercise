// Calculating total salary using HRA, DA

#include <stdio.h>

int main()
{
    int Basic_salary;
    double HRA, DA, Total_salary;

    printf("Enter Basic Salary: ");
    scanf("%d", &Basic_salary);

    if(Basic_salary <= 10000) {
        HRA = Basic_salary * 0.20;
        DA = Basic_salary * 0.80;
    }
    else if(Basic_salary > 10000 && Basic_salary <= 20000) {
        HRA = Basic_salary * 0.25;
        DA = Basic_salary * 0.90;
    }
    else if(Basic_salary > 20000) {
        HRA = Basic_salary * 0.30;
        DA = Basic_salary * 0.95;
    }

    Total_salary = HRA + DA + Basic_salary;

    printf("Total Salary: %0.2lf\n", Total_salary);

    return 0;
}