#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : RangeSumEven()
//  Description :   To display sum of even numbers between range
//  Input :         int, int
//  Output :        int
//  Author :        Apurva Vilas Shinde
//  Date :          29/07/2026
//
//////////////////////////////////////////////////////////////

int RangeSumEven(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        return -1;
    }
    else if(iStart < 0)
    {
        return -1;
    }
    else
    {
        int iCnt = 0, iSum = 0;

        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                iSum = iSum + iCnt;
            }
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

    iRet = RangeSumEven(iValue1,iValue2);

    printf("Addition is : %d\n",iRet);

    return 0;
}