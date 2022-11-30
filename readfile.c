#include<stdio.h>
#include<conio.h>
#include<stdlib.h>//standard library
int main()
{
    char ch,var[25];
    FILE *fp;//declare FILE pointer
    printf("Enter the name of the file you wish to see\n");
    gets(var);
    fp = fopen(var,"r");//read mode
    if (fp == NULL )
    {
        printf("Error while opening the file
               .\n");
        exit(0);
    }
    printf("The contents of %s file are :\n",var);
    while( ( ch = fgetc(fp)) != EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
    getch();
    return 0;
}

