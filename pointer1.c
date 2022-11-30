#include<stdio.h>
#include<conio.h>
int main()
{
    int num=100;
    int *p;//pointer declare
    int **q;//pointer to pointer declare
    p=&num;//*p=num
    q=&p;//*q=p=&num//**q=num
    printf("The value of variable num is %d\n",num);
    printf("The address of variable num is %x\n",&num);
    printf("The value of pointer p is %x\n",p);
    printf("The address of pointer p is %x\n",&p);
    printf("The value pointed by pointer p is %d\n",*p);

    printf("The value of pointer to pointer q is %x\n",q);
    printf("The address of pointer to pointer q is %x\n",&q);
    printf("The value
           pointed by pointer q is %x\n",*q);
    printf("The value pointed by pointer to pointer q is %d\n",**q);
    getch();
    return 0;


}

