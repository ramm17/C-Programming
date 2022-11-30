#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str1[10]="Hello";
    char str2[10]="World";
    char str3[20];
    int len;

    strcpy(str3,str1);
    printf("strcpy(str3,str1):%s\n",str3);

    strcat(str1,str2);
    printf("strcat(str1,str2):%s\n",str1);

    len=strlen(str1);
    printf("strlen(str1):%d\n",len);

    strupr(str1);
    printf("strupr(str1):%s\n",str1);

    strlwr(str1);
    printf("strlwr(str3,str1):%s\n",str1);

    strrev(str1);
    printf("strrev(str1):%s\n",str1);

    getch();
    return 0;
}
