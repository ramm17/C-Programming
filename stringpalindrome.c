#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
   char one[20],two[20];
   int cmp;
   printf("Enter any string:");
   scanf("%s",one);
   strcpy(two,one);
   strrev(two);
   cmp=strcmpi(one,two);
   if(cmp==0)
   {
       printf("%s is the palindrome",one);
   }
   else
   {
       printf("%s is not the palindrome",one);
   }
   getch();
   return 0;
}

