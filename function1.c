//Type1: Function passing parameters with no return value
#include<stdio.h>
#include<conio.h>
void sum(int,int);//function declaration(prototype)
int main()
{
    int num1,num2;
    printf("Enter any two numbers:\n");
    scanf("%d%d",&num1,&num2);
    sum(num1,num2);//function call
    getch();
    return 0;
}
void sum(int num1,int num2)//function definition
{
    int ans;
    ans=num1+num2;
    printf("The sum of two numbers is %d",ans);
}

