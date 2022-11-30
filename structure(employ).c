#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Address
{
    char sn[20];//street name
    int hn;//house no
};
struct Employee
{
    char name[20],post[20];
    int sal;
    struct Address add;
};
int main()
{
    struct Employee emp;
    strcpy(emp.name,"Gabbar Singh");
    strcpy(emp.post,"Teacher");
    emp.sal=45000;
    strcpy(emp.add.sn,"Ramghad");
    emp.add.hn=420;

    printf("***** EMPLOYEE DETAILS *****\n\n");
    printf("NAME       : %s\n",emp.name);
    printf("POST       : %s\n",emp.post);
    printf("SALARY     : %d\n",emp.sal);
    printf("STREET NAME: %s\n",emp.add.sn);
    printf("HOUSE NO   : %d\n",emp.add.hn);
}
