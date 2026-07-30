#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : MultDigits()
//  Description :   To get multiplication of all digits in number
//  Input :         int
//  Output :        int
//  Author :        Apurva Vilas Shinde
//  Date :          30/07/2026
//
//////////////////////////////////////////////////////////////

int MultDigits(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iDigit = 0, iMult = 1;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            iDigit = 1;
        }

        iMult = iMult * iDigit;

        iNo = iNo / 10;
    }

    return iMult;
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

    iRet = MultDigits(iValue);

    printf("The multiplication of digits in %d is : %d\n",iValue,iRet);

    return 0;
}