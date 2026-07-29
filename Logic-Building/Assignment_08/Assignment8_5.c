#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : TableRev
//  Description :   To get the reverse table of the input number
//  Input :         int
//  Output :        void
//  Author :        Apurva Vilas Shinde
//  Date :          28/07/2026
//
//////////////////////////////////////////////////////////////

void TableRev(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    printf("The reverse table of %d is : \n",iNo);

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\n",iNo * iCnt);
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

    TableRev(iValue);

    return 0;
}