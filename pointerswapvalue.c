#include<stdio.h>
#include<conio.h>
void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("\nAfter swapping num1 = %d and num2 = %d",*p,*q);
}
int main()
{
    int num1,num2;
    printf("Enter the value of num1= ");
    scanf("%d",&num1);
    printf("Enter the value of num2= ");
    scanf("%d",&num2);
    swap(&num1,&num2);//call by reference
    getch();
    return 0;

}
