/*Project: Create a text-based program to manage a collection of books. 
Users should be able to add a book (title, author), list all books, search for a book by title, 
and save/load the library to a file so data persists between runs.
Key Concepts: structs to model a book, arrays of structs, functions, and most importantly, file input/output (fopen, fprintf, fscanf, fclose). File I/O is crucial for understanding how programs store data and state.*/
#include <stdio.h>
struct book{
    char title[20];
    char author[20];
    char edition[20];
    int number;
};


int main()
{
     struct book book1;
     book1.number =1;
     printf("%d\n",book1.number);
}