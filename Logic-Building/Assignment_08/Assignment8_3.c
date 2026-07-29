#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Factorial
//  Description :   To get factorial of input number
//  Input :         int
//  Output :        int
//  Author :        Apurva Vilas Shinde
//  Date :          28/07/2026
//
//////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0, iFactorial = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFactorial = iFactorial * iCnt;
    }

    return iFactorial;
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

    iRet = Factorial(iValue);

    printf("The Factorial of %d is : %d\n",iValue,iRet);

    return 0;
}