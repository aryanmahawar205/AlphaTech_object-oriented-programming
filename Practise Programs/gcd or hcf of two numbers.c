// GCD of two numbers is a number which is a factor 
// of both the numbers (basically HCF of both the numbers)

#include <stdio.h>

int gcd(int num1, int num2);

int main()
{
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    gcd(num1, num2);
    return 0;
}

int gcd(int num1, int num2)
{
    int GCD;
    for (int i = 1; (i <= num1 && i<= num2); i++)
    {
        if (num1%i == 0 && num2%i == 0)
        {
            GCD = i;
        }
    }
    printf("%d", GCD);
    return 0;
}