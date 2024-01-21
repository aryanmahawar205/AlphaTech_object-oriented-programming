// BMI calculator

// formula for BMI = weight/(height*height), where weight is in kg and height is in m

#include <stdio.h>

int main()
{
    double weight, height, BMI;
    printf("Enter your weight (in kg) - ");
    scanf("%lf", &weight);
    printf("Enter your height (in m) - ");
    scanf("%lf", &height);
    BMI = (weight/(height*height));
    if (BMI < 18.5)
    {
        printf("Underweight \n");
    }
    else if (BMI >= 18.5 && BMI <= 24.9)
    {
        printf("Normal \n");
    }
    else if (BMI >= 25.0 && BMI <= 29.9)
    {
        printf("Overweight \n");
    }
    else if (BMI >= 30.0)
    {
        printf("Obese \n");
    }
    return 0;
}