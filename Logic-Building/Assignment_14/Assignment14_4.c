#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////
//
//  Function name : CountFour()
//  Description :   To check frequency of 4 in number
//  Input :         int
//  Output :        int
//  Time complexity : Best Case    : O(1)      
//                    Worst Case   : O( N)   
//                    Average Case : O(log N) 
//  Author :        Apurva Vilas Shinde
//  Date :          30/07/2026
//
//////////////////////////////////////////////////////////////

int CountFrequencyOfFour(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iDigit = 0, iCount = 0;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 4)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountFrequencyOfFour(iValue);

    printf("The frequncy of 4 in %d is : %d\n",iValue,iRet);
  
    return 0;
}

