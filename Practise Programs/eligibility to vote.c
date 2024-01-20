// eligible to vote or not

#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age - ");
    scanf("%d", &age);
    if (age > 18)
    {
        printf("Yes, you are eligible to vote! \n");
    }
    else
    {
        printf("No, you are not eligibile to vote! \n");
    }
    return 0;
}