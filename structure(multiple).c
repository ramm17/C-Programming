#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Student
{
    char name[20],add[20];
    int roll,cla;
};
int main()
{
    int n=3,i;
    struct Student st[n];
    for(i=0;i<n;i++)
    {
        printf("\nEnter Details of Student%d:\n",i+1);
        printf("Enter Name: ");
        scanf("%s",st[i].name);
        printf("Enter Roll No: ");
        scanf("%d",&st[i].roll);
        printf("Enter Class: ");
        scanf("%d",&st[i].cla);
        printf("Enter Address: ");
        scanf("%s",st[i].add);
    }
    system("cls");
    printf("S.N\tNAME\t\tADDRESS\t\tROLL\t\tCLASS\n");
    printf("-----------------------------------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t\t%s\t\t%d\t\t%d\n",i+1,st[i].name,st[i].add,st[i].roll,st[i].cla);
    }
    getch();
    return 0;
}
