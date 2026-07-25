#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////
//
//  Function name : CheckGreater
//  Description :   To check whether the value greater than 100 
//  Input :         int
//  Output :        bool
//  Author :        Apurva Vials Shinde
//  Date :          26/07/2026
//
//////////////////////////////////////////////////////////////

bool CheckGreater(int iNo)
{
    if(iNo > 100)
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

    bRet = CheckGreater(iValue);

    if(bRet == true)
    {
        printf("%d is greater than 100\n",iValue);
    }
    else
    {
        printf("%d is not greater than 100\n",iValue);
    }

    return 0;
}