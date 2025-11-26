#include <cstdlib>
#include <iostream>
#include "Book.h"
#include "BookList_func.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

void addbook(Book &book){
    Book book;
    cout << "Enter book number: ";
    book.setNumber();
    cout << "Enter book author: ";
    book.setAuthor();
    cout << "Enter book title: ";
    book.setTitle();
    cout << "Enter book ISBN: ";
    book.setISBN();
    cout << "Enter book pages: ";
    book.setPages();
}

