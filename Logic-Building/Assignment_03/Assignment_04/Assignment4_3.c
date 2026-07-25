#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : MultNonFact
//  Description :   Display the multiplication of non factors
//  Input :         int
//  Output :        int
//  Author :        Apurva Vilas Shinde
//  Date :          25/07/2026
//
//////////////////////////////////////////////////////////////

int MultNonfact(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0, iFact = 1;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
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

    iRet = MultNonfact(iValue);

    printf("The multiplication of non factors of %d is : %d\n ",iValue,iRet);

    return 0;
}