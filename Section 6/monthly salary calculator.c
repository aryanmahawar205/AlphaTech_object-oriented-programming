// monthly salary calculator

#include <stdio.h>

int main()
{
    double salary_per_hour; float hours_worked_per_month;
    printf("Enter the salary per hour received by the employee (in rupees) - ");
    scanf("%lf", &salary_per_hour);
    printf("Enter the total number of hours worked by the employee in the month - ");
    scanf("%f", &hours_worked_per_month);
    printf("The total monthly salary of the employee is (in rupees) - %.3lf \n", salary_per_hour*hours_worked_per_month);
    return 0;
}