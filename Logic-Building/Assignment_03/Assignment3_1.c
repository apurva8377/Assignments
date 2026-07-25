//////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Description :   print even number from double value of input
//  Input :         int
//  Output :        void, string
//  Author :        Apurva Vilas Shinde
//  Date :          23/07/2026
//
//////////////////////////////////////////////////////////////

#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    int iCnt = 0;

    for(iCnt = 2; iCnt <= 2*iNo; iCnt+=2)
    {
        printf("%d\t",iCnt);
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

    printf("Enter number : \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}