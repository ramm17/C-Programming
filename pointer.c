#include<stdio.h>
#include<conio.h>
int main()
{
    int num=100;
    int *p;//pointer declare
    p=&num;

    printf("The value of variable num is %d\n",num);
    printf("The address of variable num is %x\n",&num);
    printf("The value of pointer p is %x\n",p);
    printf("The address of pointer p is %x\n",&p);
    printf("The value pointed by pointer p is %d\n",*p);
    getch();
    return 0;

}
