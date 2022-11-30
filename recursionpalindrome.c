#include<stdio.h>
#include<conio.h>
int palindrome(int);
int main()
{
    int num,temp,sum;
    printf("Enter any number to check whether it is palindrome or not:");
    scanf("%d",&num);
    temp=palindrome(num);
    if(temp==num)
    {
        printf("%d is a Palindrome number",num);
    }
    else
    {
        printf("%d is not a Palindrome number",num);
    }
    getch();
    return 0;
}
int palindrome(int n)
{
    static int sum=0,rem;
    if(n!=0)
    {
        rem=n%10;
        sum=sum*10+rem;
        palindrome(n/10);
    }

}
