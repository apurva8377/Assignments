#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Table
//  Description :   To get the table of the input number
//  Input :         int
//  Output :        void
//  Author :        Apurva Vilas Shinde
//  Date :          28/07/2026
//
//////////////////////////////////////////////////////////////

void Table(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    printf("The table of %d is : \n",iNo);

    for(iCnt = 1; iCnt <= 10; iCnt++)
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

    Table(iValue);

    return 0;
}