#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : SumNonFact
//  Description :   Display the summation of non factors
//  Input :         int
//  Output :        int
//  Author :        Apurva Vilas Shinde
//  Date :          25/07/2026
//
//////////////////////////////////////////////////////////////

int SumNonfact(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0, iSum = 1;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
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

    iRet = SumNonfact(iValue);

    printf("The summation of non factors of %d is : %d\n ",iValue,iRet);

    return 0;
}