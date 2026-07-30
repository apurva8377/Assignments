#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////
//
//  Function name : IsDivisible()
//  Description :   To check number is divisible of 5
//  Input :         int
//  Output :        int
//  Author :        Apurva Vilas Shinde
//  Date :          29/07/2026
//
//////////////////////////////////////////////////////////////

bool IsDivisible(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    if((iNo % 5) == 0)
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

    bRet = IsDivisible(iValue);

    if(bRet == true)
    {
        printf("%d is divisible by 5\n",iValue);
    }
    else
    {
        printf("%d is not divisible by 5\n",iValue);
    }
    
    return 0;
}

