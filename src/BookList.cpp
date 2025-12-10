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

    // 尾插法
    if (head == nullptr) {
        head = newNode;
        head->data.InputaBook();
        cout << "Book information:" << endl;
        head->data.OutputaBook();//调试用代码
    } else {
        BookNode* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
    size++;
    cout << "Book added successfully!" << endl;
    
    book.OutputaBook();
}
