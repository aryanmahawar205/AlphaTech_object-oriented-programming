// point calculation

#include <stdio.h>

int main()
{
    int A, B, pts;
    printf("Enter the minimum number of points to advance to next round - ");
    scanf("%d", &pts);
    printf("Enter the number of easy tasks performed by Shenna - ");
    scanf("%d", &A);
    printf("Enter the number of hard tasks perfomed by Shenna - ");
    scanf("%d", &B);
    int pointsA = A;
    int pointsB = 2*B;
    int totalPoints = pointsA + pointsB;
    if (totalPoints > pts)
    {
        printf("Congratulations, Shenna has advanced to the next round! \n");
    }
    else
    {
        printf("She cannot advance to the next round! \n");
    }
    return 0;
}