//Type1: Function passing no parameters with return value
#include<stdio.h>
#include<conio.h>
int sum();//function declaration(prototype)
int main()
{
    int temp;
    temp=sum();//function call
    printf("The sum of two numbers is %d",temp);
    getch();
    return 0;
}
int sum()//function definition
{
    int ans,num1,num2;
    printf("Enter any two numbers:\n");
    scanf("%d%d",&num1,&num2);
    ans=num1+num2;
    return ans;

}

