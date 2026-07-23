#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Description :   It is used to Display 5 to 1
//  Input :         void
//  Output :        string
//  Author :        Apurva Vilas Shinde
//  Date :          23/07/2026
//
//////////////////////////////////////////////////////////////

int Display()
{
    int iCnt = 0;

    for(iCnt = 5; iCnt >= 1; iCnt--)
    {
        printf("%d\n",iCnt);
    }

    /*
        iCnt = 5;
        while(iCnt >= 1)
        {
        printf("%d\n",iCnt);
        iCnt--;
        }
    */
}
 
//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    Display();

    return 0;
}