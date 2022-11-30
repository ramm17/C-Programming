#include<stdio.h>
#include<conio.h>
#include<stdlib.h>//standars library
int main()
{
    FILE *fptr;//declare FILE pointer
    char name[20];
    char add[20];
    int age;
    float salary;

    /* open file for writing */
    fptr = fopen("EmployeeRecord.txt","w");//w-write mode

    if (fptr == NULL)
    {
        printf("File does not exist...\n");
        exit(0);
    }
    printf("****** EMPLOYEE DETAILS *******\n");
    fprintf(fptr,"****** EMPLOYEE DETAILS ******\n");

    printf("Enter the Employee Name:\n");
    gets(name);
    fprintf(fptr, "Name = %s\n",name);

    printf("Enter the Employee Address:\n");
    gets(add);
    fprintf(fptr, "Address = %s\n",add);

    printf("Enter the Employee Age:\n");
    scanf("%d",&age);
    fprintf(fptr, "Age = %d\n",age);

    printf("Enter the Employee Salary:\n");
    scanf("%f",&salary);
    fprintf(fptr, "Salary = %.2f\n",salary);

    printf("\n\n****** Details Successfully Inserted******");
    fclose(fptr);//to close file
    getch();
    return 0;

}
