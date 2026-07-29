#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : MultipleDisplay()
//  Description :   To print first 5 multiples of the input number
//  Input :         int
//  Output :        void
//  Author :        Apurva Vilas Shinde
//  Date :          28/07/2026
//
//////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
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
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}