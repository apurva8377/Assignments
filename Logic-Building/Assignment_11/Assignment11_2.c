#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : RangeDisplayEven
//  Description :   To display even numbers between range
//  Input :         int, int
//  Output :        void
//  Author :        Apurva Vilas Shinde
//  Date :          29/07/2026
//
//////////////////////////////////////////////////////////////

void RangeDisplayEven(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid Input\n");
    }
    else
    {
        int iCnt = 0;

        printf("The even numbers in range from %d to %d is : \n",iStart,iEnd);

        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                printf("%d\t",iCnt);
            }
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

    RangeDisplayEven(iValue1,iValue2);

    return 0;
}