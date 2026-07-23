#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Description :   It is used to Display "Marvellous" 5 times
//  Input :         void
//  Output :        string
//  Author :        Apurva Vilas Shinde
//  Date :          23/07/2026
//
//////////////////////////////////////////////////////////////

int Display()
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("Marvellous\n");
    }
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