#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : CountFactors
//  Description :   To display total number of factors of number
//  Input :         int
//  Output :        int
//  Author :        Apurva Vilas Shinde
//  Date :          29/07/2026
//
//////////////////////////////////////////////////////////////

int SumOfFactors(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
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

    iRet = SumOfFactors(iValue);

    printf("The Summation of factors of %d is : %d\n",iValue,iRet);

    return 0;
}

