// basic addition of 2D array square matrix and displaying its elements

#include <stdio.h>

int main()
{
    int rows, cols;
    printf("Enter the number of rows (of both matrices, must be same) - ");
    scanf("%d", &rows);
    printf("Enter the number of columns (of both matrices, must be same) - ");
    scanf("%d", &cols);
    int arr1[rows][cols]; // first matrix
    int arr2[rows][cols]; // second matrix
    int arr3[rows][cols]; // sum of first matrix and second matrix stored here
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter 2D array elements for first square matrix - ");
            scanf("%d", &arr1[i][j]);
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter 2D array elements for second square matrix - ");
            scanf("%d", &arr2[i][j]);
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d \t", arr3[i][j]);
        }
    }
    printf("\nArray summed and displayed as above \n");
    return 0;
}