#include<stdio.h>
#include<conio.h>
int fibo(int);
int main()
{
    int n,i;
    printf("Enter the range of Fibonacci series:");
    scanf("%d",&n);
    printf("Fibonacci series terms are:\n");

    for (i=1;i<n;i++)
    {
        printf("%d\n",fibo(i));
    }
    return 0;
}
int fibo(int n)
{
    if(n==0 || n==1)
        return n;
    else
        return (fibo(n-1)+fibo(n-2));
}
