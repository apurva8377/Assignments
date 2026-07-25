#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//  Author :        Apurva Vilas Shinde
//  Date :          26/07/2026
//
//////////////////////////////////////////////////////////////

int main()
{
    char Name[30];

    printf("Please enter the name : ");
    scanf("%[^\n]s",Name);

    printf("Your name is : %s\n",Name);

    return 0;
}