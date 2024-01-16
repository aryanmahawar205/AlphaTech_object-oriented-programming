#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the first number - ");
    scanf("%d", &a);
    printf("Enter the second number - ");
    scanf("%d", &b);
    printf("Before swap, first number is %d and second number is %d \n", a,b);
    a = a+b; // a = 10+20 = 30 (if a = 10 & b = 20 originally)
    b = a-b; // b = 30-20 = 10 (if a = 10 & b = 20 originally)
    a = a-b; // a = 30-10 = 20 (if a = 10 & b = 20 originally)
    printf("After swap, first number is %d and second number is %d \n", a,b);
    return 0;
}