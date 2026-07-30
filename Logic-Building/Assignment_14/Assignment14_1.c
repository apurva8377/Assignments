#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : DisplayDigit
//  Description :   To Display digits of number in revers order
//  Input :         int
//  Output :        void
//  Author :        Apurva Vilas Shinde
//  Date :          30/07/2026
//
//////////////////////////////////////////////////////////////

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    printf("teh digits of %d are : \n",iNo);

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        printf("%d\n",iDigit);
    }
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayDigits(iValue);
  
    return 0;
}

