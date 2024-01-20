// fahrenheit to celcius and vice versa

// temp (in F) = (9/5*temp (in C))+32
// temp (in C) = 5/9*(temp (in F)-32)

#include <stdio.h>

int main()
{
    float tempF, tempC;
    printf("Enter the temperature (in Fahrenheit) - ");
    scanf("%f", &tempF);
    printf("Enter the temperature (in Celsius) - ");
    scanf("%f", &tempC);
    printf("The corresponding temperature of %.2f F is %.2f C \n", tempF, 5/9.0*(tempF-32));
    printf("The corresponding temperature of %.2f C is %.2f F \n", tempC, (9/5.0*tempC)+32);
    return 0;
}