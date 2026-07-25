#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Multiply
//  Description :   To get multiplicaton of three numbers 
//  Input :         int, int ,int
//  Output :        int
//  Author :        Apurva Vials Shinde
//  Date :          26/07/2026
//
//////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    if(iNo1 == 0)
    {
        iNo1 = 1;
    }

    if(iNo2 == 0)
    {
        iNo2 = 1;
    }

    if(iNo3 == 0)
    {
        iNo3 = 1;
    }

    return (iNo1 * iNo2 * iNo3);
}


//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    printf("Enter third number : \n");
    scanf("%d",&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("The multiplication is : %d\n",iRet);
    
    return 0;
}