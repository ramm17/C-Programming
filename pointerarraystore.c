#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[25],i,n;
    printf("\n\n\tPointer : Store and retrieve elements from an array:\n");
    printf("-----------------------------------------------------------\n");
    printf("\tInput the number of elements to store in the array:");
    scanf("%d",&n);

    printf("\tInput %d number of elements in the array:\n",n);
    for(i=0;i<n;i++)
    {
        printf("\tElement %d : ",i+1);
        scanf("%d",arr+i);
    }
    printf("\n\tThe elements you entered are : \n");
    for(i=0;i<n;i++)
    {
        printf("\tElement %d : %d \n",i+1,*(arr+i));
    }
    getch();
    return 0;
}
