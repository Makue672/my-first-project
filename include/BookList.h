#ifndef BOOKLIST_H
#define BOOKLIST_H

#include "Book.h"
#include "globals.h"
#include <vector>



struct BookNode {
    Book data;
    BookNode *next;

    BookNode(Book aBook, BookNode *aNext = NULL) {
        data = aBook;
        next = aNext;
    }
};//链表定义



class BookList {//链表类，实现书库管理功能
    private:
        BookNode *head;
        int size;
        const string FILE_NAME = "library_data.txt"; // 数据存储文件名

        void saveToFile();// 私有辅助：将当前链表所有数据保存到文件
    public:
        BookList();
        ~BookList();

        void loadFromFile(); // 从文件加载数据到链表
        void addBook(const Book& book);
        void deleteBook(const string& isbn);
        void updateBook(const string& isbn);
        
        int searchBook(const string& query, int type); //query:搜索内容，type:搜索类型（1-标题，2-作者，3-ISBN,4-编号）
        BookNode* findByISBN(const string& isbn);  //通过ISBN查找并返回指针（用于删除和更新时的内部调用）

        void displayAll();
        void clearcash();
        void clearfile();
};


#endif