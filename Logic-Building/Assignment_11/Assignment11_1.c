#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : RangeDisplay
//  Description :   To display numbers between range
//  Input :         int, int
//  Output :        void
//  Author :        Apurva Vilas Shinde
//  Date :          29/07/2026
//
//////////////////////////////////////////////////////////////

void RangeDisplay(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid Input\n");
    }
    else
    {
        int iCnt = 0;

        printf("The range from %d to %d is : \n",iStart,iEnd);

        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            printf("%d\t",iCnt);
        }

        printf("\n");
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

    printf("Enter starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter ending point : \n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;
}