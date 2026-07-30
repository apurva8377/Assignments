#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : CountDiffernce()
//  Description :   To get difference between summation of even and odd frequnecies
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

    int iDigit = 0, iSumEven = 0, iSumOdd = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        {
            iSumEven = iSumEven + iDigit;
        }

        if((iDigit % 2) != 0)
        {
            iSumOdd = iSumOdd + iDigit;
        }

        iNo = iNo / 10;
    }

    return(iSumEven - iSumOdd);
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

    printf("The differnce between even digits and odd digits in %d is : %d\n",iValue,iRet);

    return 0;
}