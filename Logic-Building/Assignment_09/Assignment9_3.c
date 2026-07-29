#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : EvenFactorial
//  Description :   To get even facotrial of input number 
//  Input :         int
//  Output :        int
//  Author :        Apurva Vilas Shinde
//  Date :          28/07/2026
//
//////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0, iTotal = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iTotal = iTotal * iCnt;
        }
    }

    return iTotal;
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("The Factorial of even factors of %d is : %d\n",iValue,iRet);

    return 0;
}