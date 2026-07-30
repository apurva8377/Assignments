#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : CountFactors
//  Description :   To display total number of positive factors of number
//  Input :         int
//  Output :        int
//  Author :        Apurva Vilas Shinde
//  Date :          29/07/2026
//
//////////////////////////////////////////////////////////////

int CountFactors(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0, iCount = 0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            if((iCnt % 2) == 0)
            {
                iCount++;
            }
        }
    }

    return iCount;
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

    iRet = CountFactors(iValue);

    printf("The number of even factors of %d is : %d\n",iValue,iRet);

    return 0;
}

