#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name :   SumEvenNaturalNumber()
//  Description :     To sum all even natural numbers to N
//  Input :           int
//  Output :          int
//  Time complexity : O(N)
//  Author :          Apurva Vilas Shinde
//  Date :            30/07/2026
//
//////////////////////////////////////////////////////////////


int SumEvenNaturalNumber(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = SumEvenNaturalNumber(iValue);

    printf("The summation of even natural number till %d is : %d\n",iValue,iRet);

    return 0;
}