#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Student
{
    char name[20];
    int roll,cla;
};
int main()
{
    struct Student st;
    printf("Memory size occupied by structure student is %d byte",sizeof(st));

    getch();
    return 0;
}

