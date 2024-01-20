// simple interest calculation

#include <stdio.h>

int main()
{
    int p, r, t;
    printf("Enter the principle amount - ");
    scanf("%d", &p);
    printf("Enter the rate of interest - ");
    scanf("%d", &r);
    printf("Enter the time period (in years) - ");
    scanf("%d", &t);
    printf("\n");
    printf("The simple interest is - %.2f", (float) (p*r*t)/100);
    return 0;
}