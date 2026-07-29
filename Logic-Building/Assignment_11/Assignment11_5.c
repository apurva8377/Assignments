#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : RangeDisplayRev()
//  Description :   To display Sum of numbers between range in reverse order
//  Input :         int, int
//  Output :        int
//  Author :        Apurva Vilas Shinde
//  Date :          29/07/2026
//
//////////////////////////////////////////////////////////////

void RangeDisplayReverse(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid Input\n");
    }
    else if(iStart < 0)
    {
        printf("Invalid range\n");
    }
    else
    {
        int iCnt = 0;

        printf("The reverse range from %d to %d is : \n",iEnd,iStart);

        for(iCnt = iEnd; iCnt >= iStart; iCnt--)
        {
            printf("%d\t",iCnt);
        }

        printf("\n");
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

    RangeDisplayReverse(iValue1,iValue2);

    return 0;
}