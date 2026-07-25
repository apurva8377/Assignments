//////////////////////////////////////////////////////////////
//
//  Function name : DisplayConvertCase
//  Description :   Check whether the input is vowel or not
//  Input :         char
//  Output :        char
//  Author :        Apurva Vilas Shinde
//  Date :          25/07/2026
//
//////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char cValue)
{
    if((cValue == 'a') || (cValue == 'e') || (cValue == 'i') || (cValue == 'o') ||(cValue == 'u') || (cValue == 'A') || (cValue == 'E') ||(cValue == 'I') || (cValue == 'O') ||(cValue == 'U'))
    {
        return true;
    }
    else
    {
        return false;
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
    bool bRet = false;

    printf("Enter character : \n");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);

    if(bRet == true)
    {
        printf("The %c is a vowel\n",cValue);
    }
    else
    {
        printf("%c is not a vowel\n",cValue);
    }

    return 0;
}