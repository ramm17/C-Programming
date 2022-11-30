#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    char name[50];
    int roll,i,num,cla;
    printf("Enter the number of students you want to store:");
    scanf("%d",&num);

    FILE *fptr;
    fptr = fopen("record.txt","a");//a-mode append
    if (fptr == NULL)
    {
        printf("Error!!!");
        exit(0);
    }
    //fprint(fptr,"****** STUDENT RECORD ******\n");
    for(i=0; i<num;i++)
    {
    printf("\nFor student%d\nEnter Name:",i+1);
    scanf("%s",name);

    printf("Enter Class: ");
    scanf("%d",&cla);

    printf("Enter Roll: ");
    scanf("%d", &roll);

    fprintf(fptr,"Name: %s \nClass : %d \nRoll : %d \n\n",name,cla,roll);
    }
    printf("\n*** Data Successfully Inserted ***");
    fclose(fptr);
    getch();
    return 0;
}

