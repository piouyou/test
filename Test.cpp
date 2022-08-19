#include <stdio.h>
#include <string.h>
typedef struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int  book_id;
}Book;
int main(){
    Book book;
    strcpy(book.title,"C play");
    strcpy(book.author,"Runoob");
    strcpy(book.subject,"project");
    book.book_id = 12345;

    printf("test:$s\n",book.title);
}
