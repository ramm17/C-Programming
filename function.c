//Type1: Function passing parameters with return value
#include<stdio.h>
#include<conio.h>
int sum(int,int);//function declaration(prototype)
int main()
{
    int num1,num2,temp;
    printf("Enter any two numbers:\n");
    scanf("%d%d",&num1,&num2);
    temp=sum(num1,num2);//function call
    printf("The sum of two numbers is %d",temp);
    getch();
    return 0;
}
int sum(int num1,int num2)//function definition
{
    int ans;
    ans=num1+num2;
    return ans;
}
