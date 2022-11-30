//Type1: Function passing no parameters with no return value
#include<stdio.h>
#include<conio.h>
void sum();//function declaration(prototype)
int main()
{
    sum();//function call
    getch();
    return 0;
}
void sum()//function definition
{
    int ans,num1,num2;
    printf("Enter any two numbers:\n");
    scanf("%d%d",&num1,&num2);
    ans=num1+num2;
    printf("The sum of two numbers is %d",ans);

}

