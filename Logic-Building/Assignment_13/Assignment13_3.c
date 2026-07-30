#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name :   PrintOddNumber
//  Description :     To Display all odd number to N
//  Input :           int
//  Output :          void
//  Time complexity : O(N)
//  Author :          Apurva Vilas Shinde
//  Date :            30/07/2026
//
//////////////////////////////////////////////////////////////


void PrintOddNumber(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    printf("The odd numbers are : \n");

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\t",iCnt);
        }
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

    PrintOddNumber(iValue);

    return 0;
}