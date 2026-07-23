#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Accept
//  Description :   Accept the number from user and Print Stars
//  Input :         int
//  Output :        String
//  Author :        Apurva Vilas Shinde
//  Date :          23/07/2026
//
//////////////////////////////////////////////////////////////

void Accept(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
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

    Accept(iValue);

    return 0;
}