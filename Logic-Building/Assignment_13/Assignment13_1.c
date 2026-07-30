#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name :   print_number
//  Description :     To Display all number to N
//  Input :           int
//  Output :          void
//  Time complexity : O(N)
//  Author :          Apurva Vilas Shinde
//  Date :            30/07/2026
//
//////////////////////////////////////////////////////////////


void PrintNumber(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
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

    PrintNumber(iValue);

    return 0;
}