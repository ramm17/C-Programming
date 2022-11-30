#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,tmp,n;
    printf("\n\nSorting Array Elements using pointer\n");
    printf("Enter the number of elements to store in the array : ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter %d number of elements in the array :\n",n);
    for(i=0;i<n;i++)
    {
        printf("Element - %d : ",i+1);
        scanf("%d",(a+i));
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if( *(a+i) > *(a+j))


            {
                tmp = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = tmp;
            }
        }
    }
    printf("\nThe elements in the array after sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("Element - %d : %d \n",i+1,*(a+i));
    }
    printf("\n");
    getch();
    return 0;
}
