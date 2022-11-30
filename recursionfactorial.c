#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
    int num,temp;
    printf("Enter the value of num:");
    scanf("%d",&num);
    temp=fact(num);
    printf("The factorial of %d is %d",num,temp);
    getch();
    return 0;
}
int fact(int n)
{
    if(n==1)
    {
        return n;
    }
    else
    {
        return(n*fact(n-1));//recursion
    }
}
