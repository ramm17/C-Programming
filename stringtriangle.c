#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[20],i,j,len;
    printf("Enter any string:");
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c ",str[j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}


