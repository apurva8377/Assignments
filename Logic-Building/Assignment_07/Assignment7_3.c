#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Display()
//  Description :   To print numberline of input number
//  Input :         int
//  Output :        void
//  Author :        Apurva Vilas Shinde
//  Date :          28/07/2026
//
//////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }

    printf("\n");
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

    Display(iValue);

    return 0;
}