#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : DollarINR()
//  Description :   To convert value of USD in rupees
//  Input :         int
//  Output :        float
//  Author :        Apurva Vilas Shinde
//  Date :          28/07/2026
//
//////////////////////////////////////////////////////////////

float DollorInINR(int iNo)
{
    float fRupee = 0;
    fRupee = 95.72;

    return ((float)iNo * fRupee);
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    float fRet = 0.0f;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    fRet = DollorInINR(iValue);

    printf("Value of %d in INR is : %f\n",iValue,fRet);

    return 0;
}