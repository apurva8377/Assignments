#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : OddFactorial
//  Description :   To get odd facotrial of input number 
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

    int iCnt = 0, iOddFactorial = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iOddFactorial = iOddFactorial * iCnt;
        }
    }

    return iOddFactorial;
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

    printf("The Factorial of odd factors of %d is : %d\n",iValue,iRet);

    return 0;
}