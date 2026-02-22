/*Project: Create a text-based program to manage a collection of books. 
Users should be able to add a book (title, author), list all books, search for a book by title, 
and save/load the library to a file so data persists between runs.
Key Concepts: structs to model a book, arrays of structs, functions, and most importantly, file input/output (fopen, fprintf, fscanf, fclose). File I/O is crucial for understanding how programs store data and state.*/
#include <stdio.h>
#include <string.h>
// void addbook(struct book b ,char title[20],char author[20],char edition[20],int n)
// {
//     strcpy(b.title,b.title);
//     //return 1;
// }

struct book{
    char title[50];
    char author[20];
    char edition[20];
    int number;
};
void showbook(struct book b)
{
    printf("Title: %s",b.title);
    printf("\n author: %s",b.author);
    printf("\n Edition %s",b.edition);
    printf("\n number %d",b.number);
}
void addbook(struct book b,char title[60],char author[60],char edition[100],int n)
{
  
   strcpy(b.title,title);
   strcpy(b.author,author);
   strcpy(b.edition,edition);
   b.number =  n; 
}

int main()
{
     struct book book1;
     addbook(book1,"Half of a yellow sun","Chiamanda","version III",9);
    showbook(book1);
    //  addbook(book1,"Half of a yellow sun","Chimamada Adiche","version III",9);

    //  printf("%s",book1.title);
}


