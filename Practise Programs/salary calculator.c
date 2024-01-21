// salary calculation

// formula = basic salary - HRA of basic salary + DA of basic salary

#include <stdio.h>

int main()
{
    int salary, HRA, DA;
    printf("Enter the basic salary - ");
    scanf("%d", &salary);
    printf("Enter the HRA (in %) - ");
    scanf("%d", &HRA);
    printf("Enter the DA (in %) - ");
    scanf("%d", &DA);
    if (salary >= 1 && salary <= 4000)
    {
        printf("Your final salary is - %.2f \n", salary - (HRA/100.0)*salary + (DA/100.0)*salary);
    }
    else if (salary >= 4001 && salary <= 8000)
    {
        printf("Your final salary is - %.2f \n", salary - (HRA/100.0)*salary + (DA/100.0)*salary);
    }
    else if (salary >= 8001 && salary <= 12000)
    {
        printf("Your final salary is - %.2f \n", salary - (HRA/100.0)*salary + (DA/100.0)*salary);
    }
    else
    {
        printf("Your final salary is - %.2f \n", salary - (HRA/100.0)*salary + (DA/100.0)*salary);
    }
    return 0;
}