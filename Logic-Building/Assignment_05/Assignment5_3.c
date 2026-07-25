#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////
//
//  Function name : CheckLeapYear
//  Description :   To check leap year
//  Input :         int
//  Output :        bool
//  Author :        Apurva Vilas Shinde
//  Date :          26/07/2026
//
//////////////////////////////////////////////////////////////

bool CheckLeapYear(int year)
{
    if((year % 4) == 0)
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
    int year = 0;
    bool bRet = false;
    
    printf("Enter year : \n");
    scanf("%d",&year);

    bRet = CheckLeapYear(year);

    if(bRet == true)
    {
        printf("%d is a leap year\n",year);
    }
    else
    {
        printf("%d is not a leap year\n",year);
    }
    
    return 0;
}