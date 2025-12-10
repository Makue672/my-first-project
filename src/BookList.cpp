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
    
}

void BookList::clear() {
    BookNode* current = head;
    while (current != nullptr) {
        BookNode* temp = current;
        current = current->next;
        delete temp;
    }
    head = nullptr;
    size = 0;
}

void BookList::deleteBook(const string& isbn) { 
    BookNode* current = head;
    BookNode* previous = nullptr;
    while (current != nullptr) { 
        if (current->data.getISBN() == isbn) {
            if (previous == nullptr) { 
                head = current->next; 
            } else { 
                previous->next = current->next; 
            } 
            delete current;
            cout << "Book deleted successfully!" << endl;
        }
        
    }
    if(current == nullptr){
        cout << "Book with ISBN " << isbn << " not found." << endl;
        return;
    }
    size--;
}

void BookList::displayAll() {
    BookNode* current = head;
    while (current != nullptr) {
        current->data.OutputaBook();
        current = current->next;
    }
}

BookNode* BookList::findByISBN(const string& isbn) {
    BookNode* current = head;
    while (current != nullptr) {
        if (current->data.getISBN() == isbn) {
            return current;
        }
        current = current->next;
    }
    return nullptr;
}

int BookList::searchBook(const string& query, int type) {
    BookNode* current = head;
    bool found = false;
    int count = 0;
    cout << "\n=== Search Results ===" << endl;
    while(current != nullptr){
        switch(type){
            case 1:
                if(current->data.getTitle() == query){
                    current->data.OutputaBook();
                    found = true;
                    count++;
                }
                break;
            case 2:
                if(current->data.getAuthor() == query){
                    current->data.OutputaBook();
                    found = true;
                    count++;
                }
                break;
            case 3:
                if(current->data.getISBN() == query){
                    current->data.OutputaBook();
                    found = true;
                    count++;
                }
                break;
            case 4:
                if(current->data.getNumber() == query){
                    current->data.OutputaBook();
                    found = true;
                    count++;
                }
                break;
            default:
                cout << "Invalid search type." << endl;
                return 0;
        }
        current = current->next;
    }
    if(!found){
        cout << "No books found." << endl;
        return 0;
    }
    cout << "Total number of books found: " << count << endl;
    return count;
}

void BookList::updateBook(const string& isbn) { 
    BookNode* current = findByISBN(isbn);
    if (current != nullptr) { 
        cout << "Enter new book information:" << endl;
        current->data.InputaBook();
        cout << "Book updated successfully!" << endl;
        return;
    }
    if (current == nullptr){
        cout << "Book with ISBN " << isbn << " not found." << endl;
        return;
    }
}