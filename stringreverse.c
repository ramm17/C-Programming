#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[20],i,len;
    printf("Enter any string:");
    //scanf("%s",str);
    gets(str);
    len=strlen(str);
    printf("\nGiven String in Reverse order:\n");
    for(i=len-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    getch();
    return 0;
}

