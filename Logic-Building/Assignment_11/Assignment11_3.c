#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : RangeSum()
//  Description :   To display Sum of numbers between range
//  Input :         int, int
//  Output :        int
//  Author :        Apurva Vilas Shinde
//  Date :          29/07/2026
//
//////////////////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid Input\n");
    }
    else
    {
        int iCnt = 0, iSum = 0;

        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            iSum = iSum + iCnt;
        }

        return iSum;
    }
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter ending point : \n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    printf("The sum of number from %d to %d is : %d\n",iValue1,iValue2,iRet);

    return 0;
}