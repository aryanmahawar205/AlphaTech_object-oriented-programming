// program to print the decimal part of a given floating point number

#include <stdio.h>

int main()
{
    float num;
    printf("Enter the floating point number - ");
    scanf("%f", &num);
    printf("The floating part of %f is %.2f \n", num, num-(int)num);
    return 0;
}