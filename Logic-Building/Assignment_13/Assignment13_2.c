#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name :   printEvennumber
//  Description :     To Display all even number to N
//  Input :           int
//  Output :          void
//  Time complexity : O(N)
//  Author :          Apurva Vilas Shinde
//  Date :            30/07/2026
//
//////////////////////////////////////////////////////////////


void PrintEvenNumber(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    printf("The even numbers are : \n");

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
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

    PrintEvenNumber(iValue);

    return 0;
}