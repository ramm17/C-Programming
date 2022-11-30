#include<stdio.h>
#include<conio.h>
int square(int);
int rect(int,int);
int cub(int,int,int);
int main()
{
    int l,b,h;
    printf("Enter the length:");
    scanf("%d",&l);
    printf("The Area of Square is %d\n",square(l));

    printf("Enter the length and breadth of rectangle:");
    scanf("%d%d",&l,&b);
    printf("The Area of Rectangle is %d\n",rect(l,b));

    printf("Enter the length,breadth and height of Cuboid:");
    scanf("%d%d%d",&l,&b,&h);
    printf("The Area of Cuboid is %d\n",cub(l,b,h));
    getch();
    return 0;
}
int square(int l)
{
    return (l*l);
}
int rect(int l,int b)
{
    return (l*b);
}
int cub(int l,int b,int h)
{
    return ((l*b)+(b*h)+(h*l))*2;
}
