#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : FactorialDiff
//  Description :   To get facotrial differcne of input
//  Input :         int
//  Output :        int
//  Author :        Apurva Vilas Shinde
//  Date :          28/07/2026
//
//////////////////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0, iEvenFactorial = 1 ,iOddFactorial = 1, iDiff = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iEvenFactorial = iEvenFactorial * iCnt;
        }
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iOddFactorial = iOddFactorial * iCnt;
        }
    }

    iDiff = iEvenFactorial - iOddFactorial;

    return iDiff;
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

    iRet = OddFactorial(iValue);

    printf("The differnce between Factorial of even and odd factors of %d is : %d\n",iValue,iRet);

    return 0;
}