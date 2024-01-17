// speed = distance/time

#include <stdio.h>

int main()
{
    float speed, distance;
    printf("Enter the distance between the two places (in km) - ");
    scanf("%f", &distance);
    printf("Enter the speed with which you are travelling (in km per hour) - ");
    scanf("%f", &speed);
    printf("The time required for completion is (in hours) - %.2f \n", distance/speed);
    return 0;
}