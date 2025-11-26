#include "BookList_func.h"


void add_wholebook(Book &book){
    Book book;
    cout << "Enter book number: " << endl;
    book.setNumber();
    cout << "Enter book author: " << endl;
    book.setAuthor();
    cout << "Enter book title: " << endl;
    book.setTitle();
    cout << "Enter book ISBN: " << endl;
    book.setISBN();
    cout << "Enter book pages: " << endl;
    book.setPages();
}

