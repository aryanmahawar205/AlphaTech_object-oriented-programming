// party payment

#include <stdio.h>

int main()
{
    int X, Y;
    printf("How much money has Ravi started with? - ");
    scanf("%d", &X);
    printf("How much money has the waiter billed Ravi for? - ");
    scanf("%d", &Y);
    if (X>Y)
    {
        printf("YES \n");
    }
    else
    {
        printf("NO \n");
    }
    return 0;
}