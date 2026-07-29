#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : CircleArea
//  Description :   To get area of the circle
//  Input :         float
//  Output :        float
//  Author :        Apurva Vilas Shinde
//  Date :          29/07/2026
//
//////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    float fArea = 0.0f, fPI = 3.14f;

    fArea = fPI * fRadius * fRadius;

    return fArea;
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    float fVAlue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius : \n");
    scanf("%f",&fVAlue);

    dRet = CircleArea(fVAlue);

    printf("Area of circle is : %lf\n", dRet);

    return 0;
}