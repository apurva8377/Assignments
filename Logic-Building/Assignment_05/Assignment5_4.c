#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////
//
//  Function name : CheckLeapYear
//  Description :   To check negative or positive number
//  Input :         int
//  Output :        bool
//  Author :        Apurva Vilas Shinde
//  Date :          26/07/2026
//
//////////////////////////////////////////////////////////////

bool CheckNumber(int iNo)
{
    if(iNo < 0)
    {
        return false;
    }
    else
    {
        return true;
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

    bRet = CheckNumber(iValue);

    if(bRet == true)
    {
        printf("%d is a positive number\n",iValue);
    }
    else
    {
        printf("%d is a negative number\n",iValue);
    }
    
    return 0;
}