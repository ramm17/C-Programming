#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char ch[100],i,len,v,c,s,d;
    v=c=s=d=0;
    printf("Enter any sentence:");
    gets(ch);
    len=strlen(ch);
    for(i=0;i<len;i++)
    {
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
        {
            v++;
        }
        else if(ch[i]>='0'&&ch[i]<='9')
        {
            d++;
        }
        else if(ch[i]==' ')
        {
            s++;
        }
        else
        {
            c++;
        }
    }
    printf("No. of vowels:%d\n",v);
    printf("No. of Consonants:%d\n",c);
    printf("No. of Digits:%d\n",d);
    printf("No. of Space:%d\n",s);
    getch();
    return 0;
}
