// program to calculate the sum of n terms of an AP

#include <stdio.h>

int main()
{
    float a, d; int n;
    printf("Enter the first term of the AP - ");
    scanf("%f", &a);
    printf("Enter the common difference of the AP - ");
    scanf("%f", &d);
    printf("Enter the number of terms in the AP - ");
    scanf("%d", &n);
    printf("The sum of n terms of the AP is - %.2f \n", n/2.0*(2*a+((n-1)*d)));
    return 0;
}