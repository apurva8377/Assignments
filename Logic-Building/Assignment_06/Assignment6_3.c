#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////
//
//  Function name : CheckGreater
//  Description :   To check two values are equal or not 
//  Input :         int, int
//  Output :        bool
//  Author :        Apurva Vials Shinde
//  Date :          26/07/2026
//
//////////////////////////////////////////////////////////////

bool CheckEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    bRet = CheckEqual(iValue1, iValue2);

    if(bRet == true)
    {
        printf("%d and %d are equal\n",iValue1,iValue2);
    }
    else
    {
        printf("%d and %d are not equal\n",iValue1,iValue2);
    }

    return 0;
}