#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Description :   Check whether input is even or odd
//  Input :         int
//  Output :        bool
//  Author :        Apurva Vilas Shinde
//  Date :          23/07/2026
//
//////////////////////////////////////////////////////////////

bool CheckEven(int iNo)
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
    int iValue = 0, iRet = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CheckEven(iValue);

    if(iRet == true)
    {
        printf("%d is a even number\n",iValue);
    }
    else
    {
        printf("%d is a odd number\n",iValue);
    }

    return 0;
}