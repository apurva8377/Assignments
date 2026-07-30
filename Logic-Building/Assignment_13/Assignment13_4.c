#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name :   SumNaturalNumbers()
//  Description :     To sum all natural numbers to N
//  Input :           int
//  Output :          int
//  Time complexity : O(N)
//  Author :          Apurva Vilas Shinde
//  Date :            30/07/2026
//
//////////////////////////////////////////////////////////////


int SumNaturalNumber(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
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

    iRet = SumNaturalNumber(iValue);

    printf("The summation of natural number till %d is : %d\n",iValue,iRet);

    return 0;
}