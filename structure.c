#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Book
{
    char title[20],author[20];
    int id;
    float price;
};
int main()
{
    struct Book b1,b2;
    //book1 specifications
    strcpy(b1.title,"C Programming");
    strcpy(b1.author,"Dennis Ritchie");
    b1.id=1001;
    b1.price=17.5;
    //book2 specifications
    strcpy(b2.title,"C++ Programming");
    strcpy(b2.author,"Bjarne Stroustrup");
    b2.id=2001;
    b2.price=21.5;

    printf("*** Displaying Book1 Details ***\n");
    printf("Title: %s\nAuthor: %s\nId: %d\nPrice: $%.2f\n\n",b1.title,b1.author,b1.id,b1.price);

    printf("*** Displaying Book2 Details ***\n");
    printf("Title: %s\nAuthor: %s\nId: %d\nPrice: $%.2f\n\n",b2.title,b2.author,b2.id,b2.price);
}
