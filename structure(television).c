#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Television
{
    char bran[20];
    float pri,mod;
    int siz;
};
int main()
{
    int n=3,i;
    struct Television st[n];
    for(i=0;i<n;i++)
    {
        printf("\nEnter Details of Television%d:\n",i+1);
        printf("Enter Brand: ");
        scanf("%s",st[i].bran);
        printf("Enter Model No: ");
        scanf("%f",&st[i].mod);
        printf("Enter Size: ");
        scanf("%d",&st[i].siz);
        printf("Enter Price: ");
        scanf("%f",&st[i].pri);
    }
    system("cls");
    printf("S.N\tBRAND\t\tMODEL\t\tSIZE\t\t  PRICE\n");
    printf("---------------------------------------------------------------- \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t\t%.2f\t\t%d INCH\t\tRs. %.2f\n",i+1,st[i].bran,st[i].mod,st[i].siz,st[i].pri);
    }
    getch();
    return 0;
}

