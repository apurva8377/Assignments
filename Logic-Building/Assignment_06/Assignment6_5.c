#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : Percentage
//  Description :   To get percentage for marks
//  Input :         int, int ,int
//  Output :        float
//  Author :        Apurva Vials Shinde
//  Date :          26/07/2026
//
//////////////////////////////////////////////////////////////

float Percentage(int iTotal, int iMarks)
{
    if(iTotal == 0)
    {
        return -1;
    }

    float fPer = 0.0f;

    fPer = ((float)iMarks / (float)iTotal) * 100;

    return fPer;
}


//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iTotal = 0, iMarks = 0;
    float fRet = 0;

    printf("Please enter total marks :\n");
    scanf("%d",&iTotal);

    printf("Please enter obtained Marks: \n");
    scanf("%d",&iMarks);

    fRet = Percentage(iTotal, iMarks);

    printf("Your percentage is : %.2f%%\n",fRet);

    return 0;
}