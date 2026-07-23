#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Description :   print the value given no. of times
//  Input :         int
//  Output :        string
//  Author :        Apurva Vilas Shinde
//  Date :          23/07/2026
//
//////////////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iFrequency < 0)
    {
        iFrequency = - iFrequency;
    }

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }

    printf("\n");
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    printf("Enter frequency : \n");
    scanf("%d",&iCount);

    Display(iValue, iCount);

    return 0;
}