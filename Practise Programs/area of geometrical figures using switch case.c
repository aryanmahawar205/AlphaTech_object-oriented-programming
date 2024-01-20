// area fo circle, square, triangle and rectangle

#include <stdio.h>

int main()
{
    char fig;
    printf("Enter the first character of the word whose area you wish to calculate ie. (C - Circle, S - Square, T - Triangle, R - Rectangle - ");
    scanf("%c", &fig);
    switch (fig)
    {
        case 'C':
        {
            float radius;
            printf("Enter the radius of the circle - ");
            scanf("%f", &radius);
            printf("The area of the circle is - %.2f \n", 3.14*radius*radius);
            break;
        }
        case 'S':
        {
            float side;
            printf("Enter the side of the square - ");
            scanf("%f", &side);
            printf("The area of the square is - %.2f \n", side*side);
            break;
        }
        case 'T':
        {
            float base, height;
            printf("Enter the base width of the triangle - ");
            scanf("%f", &base);
            printf("Enter the height of the triangle - ");
            scanf("%f", &height);
            printf("The area of the triangle is - %.2f \n", 0.5*base*height);
            break;
        }
        case 'R':
        {
            float length, breadth;
            printf("Enter the length of the rectangle - ");
            scanf("%f", &length);
            printf("Enter the breadth of the rectangle - ");
            scanf("%f", &breadth);
            printf("The area of the rectangle is - %.2f \n", length*breadth);
            break;
        }
        default:
        {
            printf("Invalid Input...Try Again! \n");
        }
    }
    return 0;
}