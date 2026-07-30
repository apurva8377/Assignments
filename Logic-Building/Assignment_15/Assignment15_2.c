#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : CountOdd
//  Description :   To check frequency of odd digits in number
//  Input :         int
//  Output :        int
//  Author :        Apurva Vilas Shinde
//  Date :          30/07/2026
//
//////////////////////////////////////////////////////////////

int CountOdd(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iDigit = 0, iCount = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) != 0)
        {
            iCount++;
        }

        iNo = iNo / 10;
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

    iRet = CountOdd(iValue);

    printf("The frequency of odd number in %d is : %d\n",iValue,iRet);

    return 0;
}