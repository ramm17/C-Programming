#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[20],count=0,i;
    printf("Enter any string:");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        count++;
    }
    printf("\nThe length of given string:%d",count);
    getch();
    return 0;
}

