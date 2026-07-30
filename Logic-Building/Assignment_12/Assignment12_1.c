#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : print_factors
//  Description :   To display positive factors of number
//  Input :         int
//  Output :        void
//  Author :        Apurva Vilas Shinde
//  Date :          29/07/2026
//
//////////////////////////////////////////////////////////////

void PrintFactors(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    printf("The factors of %d are : \n",iNo);

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            if((iCnt % 2) == 0)
            {
                printf("%d\n",iCnt);
            }
        }
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

    printf("Enter number : \n");
    scanf("%d",&iValue);

    PrintFactors(iValue);

    return 0;
}

