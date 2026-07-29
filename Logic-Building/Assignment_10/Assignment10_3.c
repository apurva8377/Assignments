#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : KMToMeter()
//  Description :   To convert distance from kilometer into meter
//  Input :         int
//  Output :        int
//  Author :        Apurva Vilas Shinde
//  Date :          29/07/2026
//
//////////////////////////////////////////////////////////////

int KMToMeter(int iKM)
{
    int iMeter = 0;

    iMeter = iKM * 1000;

    return iMeter;
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance : \n");
    scanf("%d",&iValue);

    iRet = KMToMeter(iValue);

    printf("%d km is %d meters\n",iValue,iRet);

    return 0;
}