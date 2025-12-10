#include "Book.h"
#include "BookList.h"
#include "globals.h"

BookList::BookList() {
    head = nullptr;
    size = 0;
}

BookList::~BookList() {
    clear();
}

void BookList::addBook(const Book& book) {
    BookNode* newNode = new BookNode(book, nullptr);
    
    // 头插法
    if (head == nullptr) {
        head = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
    size++;
    cout << "Book added successfully!" << endl;
}
