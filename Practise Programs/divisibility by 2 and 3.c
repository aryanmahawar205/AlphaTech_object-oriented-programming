// to check if a given number is divisible by 2 and 3

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number - ");
    scanf("%d", &num);
    if (num%2 == 0)
    {
        printf("%d is divisible by 2 \n", num);
    }
    if ( num%2 == 0 || num%3 == 0)
    {
        printf("%d is divisible by 3 \n", num);
    }
    else
    {
        printf("%d is divisible by none (ie., 2 and 3 both) \n", num);
    }
    return 0;
}