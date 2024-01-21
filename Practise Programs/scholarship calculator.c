// scholarship calculation

#include <stdio.h>

int main()
{
    int markMath, markLang, markEng, markPhy, markChem, markCS;
    char gender;
    printf("Enter your gender (male - m, female - f) - ");
    scanf("%c", &gender);
    printf("Enter your Maths marks - ");
    scanf("%d", &markMath);
    printf("Enter your Language marks - ");
    scanf("%d", &markLang);
    printf("Enter your English marks - ");
    scanf("%d", &markEng);
    printf("Enter your Physics marks - ");
    scanf("%d", &markPhy);
    printf("Enter your Chemistry marks - ");
    scanf("%d", &markChem);
    printf("Enter your Computer Science marks - ");
    scanf("%d", &markCS);
    if (markMath >= 80)
    {
        printf("Eligible for Ramanujan Scholarship \n");
    }
    else if (markPhy >= 90 && markMath >= 90)
    {
        printf("Eligible for Einstein Scholarship \n");
    }
    else if (markMath >= 90 && markLang >= 90 && markEng >= 90 && markPhy >= 90 && markChem >= 90 && markCS >= 90)
    {
        printf("Eligible for Pragati Scholarship \n");
    }
    else if (markCS >= 85 && markCS < 95)
    {
        printf("Eligible for Gaurav Foundation Scholarship \n");
    }
    else if (markEng >= 75 && markEng <= 85)
    {
        printf("Eligible for Shakespeare Scholarship \n");
    }
    else if (markChem >= 90 && gender == "f")
    {
        printf("Eligible for Pratibha Memorial Scholarship \n");
    }
    return 0;
}