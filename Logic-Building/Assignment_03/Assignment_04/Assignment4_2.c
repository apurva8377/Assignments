#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : FactDecreaseOrder
//  Description :   Display factors in decreasing order
//  Input :         int
//  Output :        int
//  Author :        Apurva Vilas Shinde
//  Date :          25/07/2026
//
//////////////////////////////////////////////////////////////

void FactDecreaseOrder(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    for(iCnt = iNo/2; iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
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

    FactDecreaseOrder(iValue);

    return 0;
}