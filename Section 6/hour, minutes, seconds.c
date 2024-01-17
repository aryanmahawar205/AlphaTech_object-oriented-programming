// calculation of hours, minutes and seconds

#include <stdio.h>

int main()
{
    int s;
    printf("Enter the numbers of seconds - ");
    scanf("%d", &s);
    int hours = s/3600;
    int minutes = (s-hours*3600)/60;
    int seconds = (s-hours*3600)%60;
    printf("The seconds inputted has been translated to - %d hours, %d minutes and %d seconds", hours, minutes, seconds);
    return 0;
}