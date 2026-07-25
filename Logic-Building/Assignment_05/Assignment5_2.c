#include<stdio.h>


//////////////////////////////////////////////////////////////
//
//  Function name : Maximum
//  Description :   To check Even or Odd
//  Input :         int
//  Output :        int
//  Author :        Apurva Vilas Shinde
//  Date :          26/07/2026
//
//////////////////////////////////////////////////////////////

int Maximum(int A, int B)
{
    if(A > B)
    {
        return A;
    }
    else
    {
        return B;
    }
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;
    
    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    iRet = Maximum(iValue1, iValue2);

    printf("Maximum is : %d\n",iRet);
    
    return 0;
}