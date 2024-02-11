// this is a temporary file just to test out concepts and try out new things

// sum of 2 matrices

#include <stdio.h>

int main()
{
    int rc;
    printf("Enter the number of rows and columns - ");
    scanf("%d", &rc);
    int mat1[rc][rc];
    int mat2[rc][rc];
    printf("\nEnter first matrix elements\n");
    for (int i = 0; i < rc; i++)
    {
        for (int j = 0; j < rc; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("\nFirst matrix created as\n");
    for (int i = 0; i < rc; i++)
    {
        for (int j = 0; j < rc; j++)
        {
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter second matrix elements\n");
    for (int i = 0; i < rc; i++)
    {
        for (int j = 0; j < rc; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("\nSecond matrix created as\n");
    for (int i = 0; i < rc; i++)
    {
        for (int j = 0; j < rc; j++)
        {
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }
    int add[rc][rc];
    for (int i = 0; i < rc; i++)
    {
        for (int j = 0; j < rc; j++)
        {
            add[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("\nSum matrix computed as\n");
    for (int i = 0; i < rc; i++)
    {
        for (int j = 0; j < rc; j++)
        {
            printf("%d\t", add[i][j]);
        }
        printf("\n");
    }
}