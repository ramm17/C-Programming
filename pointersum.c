#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,sum;
    int *p,*q;
    printf("Enter any two numbers:\n");
    scanf("%d%d",&num1,&num2);
    p=&num1;
    q=&num2;
    sum=*p + *q;
    printf("Addition=%d",sum);
    getch();
    return 0;



}
