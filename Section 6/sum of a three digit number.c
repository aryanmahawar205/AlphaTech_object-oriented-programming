// program to calculate the sum of digits of a 3 digit number

#include <stdio.h>

int main()
{
    int num, rem, sum = 0;
    printf("Enter a three digit number - ");
    scanf("%d", &num);
    while (num>0)
    {
        rem = num%10;
        sum += rem;
        num = num/10;
    }
    printf("The sum of the digits is - %d", sum);
    return 0;
}