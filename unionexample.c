#include<stdio.h>
#include<conio.h>
#include<string.h>
union Student
{
    char name[20],add[20];
    int roll,cla;
};
int main()
{

    union Student st;

    strcpy(st.name,"Ajay Dhital");
    printf("Student's Name: %s\n",st.name);

    strcpy(st.add,"Koteshwor");
    printf("Student's Address: %s\n",st.add);

    st.roll=32;
    printf("Student's Roll No: %d\n",st.roll);

    st.cla=10;
    printf("Student's Class: %d\n",st.cla);
    getch();
    return 0;
}


