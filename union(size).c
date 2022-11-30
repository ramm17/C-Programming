#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
union Student
{
    char name[20];
    int roll,cla;
};
int main()
{
    union Student st;
    printf("Memory size occupied by union student is %d byte",sizeof(st));

    getch();
    return 0;
}


