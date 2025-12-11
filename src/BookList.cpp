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




void BookList::saveToFile() {//保存到文件方法
    ofstream out(FILE_NAME);
    if (!out.is_open()) {
        cout << "Error: Unable to save to file!" << endl;
        return;
    }

    BookNode* current = head;
    while (current != nullptr) {
        current->data.writeToStream(out);
        current = current->next;
    }
    out.close();
    cout << "=====Data has saved to file automatically=====" << endl; 
}

void BookList::loadFromFile() {//从文件加载方法
    ifstream in(FILE_NAME);
    if (!in.is_open()) {// 文件可能不存在（第一次运行）
        return;
    }

    int count = 0;
    while (true) {
        Book tempBook;
        if (!tempBook.readFromStream(in)) break;// 如果读取失败（文件读完了），退出循环

        cout << "Data Loading..." << endl;
        BookNode* newNode = new BookNode(tempBook, nullptr);// 执行尾插法建立链表
        if (head == nullptr) {
            head = newNode;
        } else {
            BookNode* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
        size++;
        count++;
    }
    in.close();
    if (count > 0) {
        cout << "System has loaded " << count << " books from file." << endl;
    }
}
void BookList::addBook(const Book& book) {// 添加图书
    int num;
    cout << "Enter number of books to add: "<< endl;
    cin >> num;
    if (num <= 0) {
        cout << "Invalid number of books." << endl;
        return;
    }
    cout<<endl;
    cout << "=== Input " << num <<" Book(s) Information ===" << endl;
    for (int i = 1; i <= num; ++i) {
        cout << "\n--- Book " << i << " ---" << endl;
        BookNode* newNode = new BookNode(book, nullptr);

        // 尾插法
        if (head == nullptr) {
            head = newNode;
            head->data.InputaBook();
        } else {
            BookNode* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            newNode->data.InputaBook();
            current->next = newNode;
        }
    }
    size+= num;
    cout << "Book(s) added successfully!" << endl;
    saveToFile();
}

void BookList::clear() {// 清空链表
    if (head == nullptr) {
        cout << "Book list is empty." << endl;
        return;
    }
    BookNode* current = head;
    while (current != nullptr) {
        BookNode* temp = current;
        current = current->next;
        delete temp;
    }
    head = nullptr;
    size = 0;
    saveToFile();
    cout << "Book list cleared successfully!" << endl;
}



void BookList::displayAll() {// 显示所有图书
    if (head == nullptr) {
        cout << "Book list is empty." << endl;
        return;
    }
    BookNode* current = head;
    cout << "\n=== All of" << size << " Books ===" << endl;
    while (current != nullptr) {
        current->data.OutputaBook();
        current = current->next;
    }
}

BookNode* BookList::findByISBN(const string& isbn) {// 通过ISBN查找书籍
    if (head == nullptr) {
        cout << "Book list is empty." << endl;
        return nullptr;
    }
    BookNode* current = head;
    while (current != nullptr) {
        if (current->data.getISBN() == isbn) {
            return current;
        }
        current = current->next;
    }
    return nullptr;
}

int BookList::searchBook(const string& query, int type) {// 搜索书籍
    if (head == nullptr) {
        cout << "Book list is empty." << endl;
        return 0;
    }
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

void BookList::deleteBook(const string& isbn) { // 删除图书
    if (head == nullptr) {
        cout << "Book list is empty." << endl;
        return;
    }
    if(findByISBN(isbn) == nullptr){
        cout << "Book with ISBN " << isbn << " not found." << endl;
        return;
    }else{
        cout << "Book with ISBN " << isbn << " found." << endl;
        cout << "Are you sure you want to delete this book? (y/n): ";
        char confirm;
        cin >> confirm;
        if(confirm == 'y'){
            BookNode* current = head;
            BookNode* prev = nullptr;
            while (current != nullptr) {
                if (current->data.getISBN() == isbn) {
                    if (prev == nullptr) {
                        head = current->next;
                    } else {
                        prev->next = current->next;
                    }
                    delete current;
                    cout << "Book deleted successfully!" << endl;
                    size--;
                    saveToFile();
                    return;
                }
                prev = current;
                current = current->next;
            }
        }else{
            if(confirm == 'n'){
                cout << "Book not deleted." << endl;
                return;
            }
            cout << "Invalid input." << endl;
            return;
        }
    }
}

void BookList::updateBook(const string& isbn) { // 更新图书信息
    if (head == nullptr) {
        cout << "Book list is empty." << endl;
        return;
    }
    BookNode* current = findByISBN(isbn);
    if (current != nullptr) { 
        cout << "Enter new book information:" << endl;
        current->data.InputaBook();
        cout << "Book updated successfully!" << endl;
        saveToFile();
        return;
    }
    if (current == nullptr){
        cout << "Book with ISBN " << isbn << " not found." << endl;
        return;
    }
}