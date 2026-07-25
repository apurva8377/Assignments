#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : FindeLargestNumber
//  Description :   To find largest among three numbers
//  Input :         int
//  Output :        int
//  Author :        Apurva Vilas Shinde
//  Date :          26/07/2026
//
//////////////////////////////////////////////////////////////

int FindLargestNumber(int iNo1, int iNo2, int iNo3)
{
    if((iNo1 >iNo2) && (iNo1 > iNo3))
    {
        return iNo1;
    }
    else if((iNo2 > iNo1) && (iNo2 > iNo3))
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;
    
    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    printf("Enter third number : \n");
    scanf("%d",&iValue3);

    iRet = FindLargestNumber(iValue1,iValue2,iValue3);

    printf("The largest number is %d\n",iRet);
    
    return 0;
}