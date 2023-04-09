#include <stdio.h>
#include <string.h>

struct bookInfo
{
int bookID;
char *bookName;
int totalPages;
};

int main()
{
struct bookInfo b1;

printf("Enter the book id : ");
scanf("%d", &b1.bookID);
printf("Enter the Total No. of pages in the book : ");
scanf("%d",&b1.totalPages);
printf("Enter the book name : ");
gets(b1.bookName);

printf("Book ID: %d\n",b1.bookID);
printf("Book Name : %s", b1.bookName);
printf("Total No. of Pages in the Book  : %d",b1.totalPages);


return 0;
}