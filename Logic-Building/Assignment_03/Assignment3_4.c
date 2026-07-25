//////////////////////////////////////////////////////////////
//
//  Function name : DisplayConvertCase
//  Description :   convert case of the input character
//  Input :         char
//  Output :        char
//  Author :        Apurva Vilas Shinde
//  Date :          25/07/2026
//
//////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayConvertCase(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("%c\n",cValue - 32);
    }
    else if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("%c\n",cValue + 32);
    }
    else
    {
        printf("%c\n",cValue);
    }
}

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter character : \n");
    scanf("%c",&cValue);

    DisplayConvertCase(cValue);

    return 0;
}