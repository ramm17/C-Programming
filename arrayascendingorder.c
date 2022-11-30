#include<stdio.h>
#include<conio.h>
int main()
{
    int n=5;
    int arr[n],i,j,a;
    printf("Enter the no of elements in the array\n",n);
    printf("Enter the numbers\n");

    for(i=0;i<n;++i)
    scanf("%d",&arr[i]);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
        }
    }
    printf("The numbers arranged in asecnding order are:\n ");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    getch();
    return 0;
}
