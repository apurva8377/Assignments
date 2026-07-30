#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////
//
//  Function name : CheckZero()
//  Description :   To Display digits of number in revers order
//  Input :         int
//  Output :        bool
//  Time complexity : Best Case    : O(1)      
//                    Worst Case   : O(log N)   
//                    Average Case : O(log N) 
//  Author :        Apurva Vilas Shinde
//  Date :          30/07/2026
//
//////////////////////////////////////////////////////////////

bool CheckZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if(iDigit == 0)
        {
            return true;
        }
    }

    return false;
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == true)
    {
        printf("There is a zero present\n");
    }
    else
    {
        printf("There is no zero present\n");
    }
  
    return 0;
}

