#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Check
//  Description :   It is use to Check Divisible of 5
//  Input :         int
//  Output :        float
//  Author :        Apurva Vilas Shinde
//  Date :          23/07/2026
//
//////////////////////////////////////////////////////////////

bool Check(int iNo)
{   
    if ((iNo % 5) == 0)
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

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("%d is divisible by 5.\n",iValue);
    }
    else
    {
        printf("%d is not divisible by 5.\n",iValue);
    }

    return 0;
}