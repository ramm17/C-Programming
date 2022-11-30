#include<stdio.h>
#include<conio.h>
int sum(int);
int main()
{
    int num,temp;
    printf("Enter the value of num:");
    scanf("%d",&num);
    temp=sum(num);
    printf("The sum of given number is %d",temp);
    getch();
    return 0;
}
int sum(int n)
{
    static add=0;
    if(n>0)
    {
     add+=n;
     sum(n-1);//recursion
    }
    return add;

}

