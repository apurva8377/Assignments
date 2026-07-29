#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : RectArea
//  Description :   To get area of the rectangle
//  Input :         float, float
//  Output :        float
//  Author :        Apurva Vilas Shinde
//  Date :          29/07/2026
//
//////////////////////////////////////////////////////////////

double RectArea(float fWidth, float fHeight)
{
    if (fWidth < 0.0f)
    {
        fWidth = -fWidth;
    }

    if (fHeight < 0.0f)
    {
        fHeight = -fHeight;
    }
    
    double fArea = 0.0;

    fArea = fWidth * fHeight;

    return fArea;
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width : \n");
    scanf("%f",&fValue1);

    printf("Enter height : \n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangle is : %lf\n", dRet);

    return 0;
}