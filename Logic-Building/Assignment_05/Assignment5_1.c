#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////
//
//  Function name : CheckEvenOdd
//  Description :   To check Even or Odd
//  Input :         int
//  Output :        bool
//  Author :        Apurva Vilas Shinde
//  Date :          26/07/2026
//
//////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
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
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is a even number\n",iValue);
    }
    else
    {
        printf("%d is a odd number\n",iValue);
    }

    return 0;
}