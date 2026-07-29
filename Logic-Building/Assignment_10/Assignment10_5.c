#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : SquareMeter()
//  Description :   To convert area in square feet to square in meter
//  Input :         float
//  Output :        double
//  Author :        Apurva Vilas Shinde
//  Date :          29/07/2026
//
//////////////////////////////////////////////////////////////

double SquareMeter(int iSquareFeet )
{
    if(iSquareFeet < 0)
    {
        iSquareFeet = -iSquareFeet;
    }
    
    double dSquareMeter = 0.0;

    dSquareMeter = iSquareFeet * 0.0929;

    return dSquareMeter;
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0.0f; 
    double dRet = 0.0;

    printf("Enter area in square feet : \n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("The %d square feet area in meters is : %f\n",iValue,dRet);

    return 0;
}