// program to reverse a number

#include <stdio.h>

int main()
{
    int num, rem, reverse = 0;
    printf("Enter a three digit number - ");
    scanf("%d", &num);
    while (num>0)
    {
        rem = num%10;
        reverse = reverse*10 + rem;
        num = num/10;
    }
    printf("The reverse of the digits is - %d", reverse);
    return 0;
}