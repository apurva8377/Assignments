#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : KMToMeter()
//  Description :   To convert temperature fahrenheit to celsius
//  Input :         float
//  Output :        double
//  Author :        Apurva Vilas Shinde
//  Date :          29/07/2026
//
//////////////////////////////////////////////////////////////

double FhToCelcius(float fFh)
{
    double dCelcius = 0.0;

    dCelcius = (fFh-32)*(5.0/9.0);

    return dCelcius;
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0f; 
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : \n");
    scanf("%f",&fValue);

    dRet = FhToCelcius(fValue);

    printf("The %.2f fahrenheit is %.2lf celcius\n",fValue,dRet);

    return 0;
}